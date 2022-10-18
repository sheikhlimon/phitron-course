def make_upper(s):
    upp_s = ''
    for c in s:
        if c >= 'a' and c <= 'z':
            upp_s += str(chr(ord(c)-32))
        else:
            upp_s += str(c)
    return upp_s


def make_capital(s):
    cap_s = ''
    if s[0] >= 'a' and s[0] <= 'z':
        cap_s = str(chr(ord(s[0])-32)) + s[1:]
    else:
        return s
    return cap_s


def make_lower(s):
    low_s = ''
    for c in s:
        if c >= 'A' and c <= 'Z':
            low_s += str(chr(ord(c)+32))
        else:
            low_s += str(c)
    return low_s


def test_script():
    print(make_upper("This is an uppercase example"))
    print(make_capital("This is an capitalized example"))
    print(make_lower("This is an lowercase example"))

test_script()
