def nearly_equal(str1, str2):
    count = 0
    i = j = 0
    while (i < len(str1) and j < len(str2)):
        if (str1[i] != str2[j]):
            count += 1
            if (len(str1) > len(str2)):
                i += 1
            elif (len(str1) == len(str2)):
                pass
            else:
                i -= 1
        if (count > 1):
            return False
        i += 1
        j += 1
    if (count < 2):
        return True


s1 = nearly_equal('python', 'perl')
s2 = nearly_equal('perl', 'pearl')
print(s1)
print(s2)
