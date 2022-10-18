def string_balance_test(s1, s2):
    flag = True
    for char in s1:
        if char in s2:
            continue
        else:
            flag = False
    return flag


s1 = "Phi"
s2 = "Phitron"

flag = string_balance_test(s1, s2)
print(flag)
