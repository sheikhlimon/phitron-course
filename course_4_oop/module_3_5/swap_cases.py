def swap_case(s):
    new = ""
    for i in range(len(s)):
        if str.isupper(s[i]):
            new = new + str.lower(s[i])
        elif str.islower(s[i]):
            new = new + str.upper(s[i])

        else:
            new = new + str(s[i])
    return new


s = input()

result = swap_case(s)

print(result)
