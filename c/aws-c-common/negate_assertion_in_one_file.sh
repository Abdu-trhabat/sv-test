file="$1"
filename="${file%.*}"
new_name="${filename}_negated.i"
new_yaml="${filename}_negated.yml"
echo "Negating file ${filename} ..."
# Call spatch, the transformation tool in Coccinelle, to negate the assertions
spatch --sp-file negate_assertion_semantic_patch.txt "${filename}.i" -o "${new_name}"
# Use regexp for an edge case that Coccinelle does not handle for an unknown reason
perl -i -p -e 's/do { __VERIFIER_assert(\(.*?\));/do { __VERIFIER_assert(!\1);/g' "${new_name}"
# Create a new YAML file
cp "${file}" "${new_yaml}"
sed -i "s/${filename}.i/${new_name}/" "${new_yaml}"
sed -i 's/true/false/' "${new_yaml}"
