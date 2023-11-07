rm -f *_negated.i
rm -f *_negated.yml
grep -l 'expected_verdict: true' *.yml | xargs -n 1 -P 128 negate_assertion_in_one_file.sh
