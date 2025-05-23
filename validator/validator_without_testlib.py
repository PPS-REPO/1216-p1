import sys
inp = sys.stdin.read()
assert inp.endswith('\n'), "Input must end with a newline"
s = inp.rstrip('\n')
assert 1 <= len(s) <= 100, "String length must be between 1 and 9"
for c in s:
    assert 33 <= ord(c) <= 126, f"Invalid character: {repr(c)}"
