def create_string(l):
    str2 = ' '.join(str(elem) for elem in l)
    return str2


l = ["This", "is", "very", "fantastic"]
res = create_string(l)
print(res)
