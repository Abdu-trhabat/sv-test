true_tasks=$(grep -l 'expected_verdict: true' *.yml)

for file in ${true_tasks}
do
  filename="${file%.*}"
  new_name="${filename}_negated.i"
  new_yaml="${filename}_negated.yml"
  # Negate all assertions non-greedily
  perl -p -e 's/__VERIFIER_assert(\(.*?\));/__VERIFIER_assert(!\1);/g' \
    "${filename}.i" > "${new_name}"
  # Create a new YAML file
  cp "${file}" "${new_yaml}"
  sed -i "s/${filename}.i/${new_name}/" "${new_yaml}"
  sed -i 's/true/false/' "${new_yaml}"
done
