def create_list(d):
    list1 = []
    for key, value in d.items():
        list1.extend([key, value])
    return list1

d = {'!': 1, '@': 2, '#': 3, '$': 4, '%': 5, '^': 6}
res = create_list(d)
print(res)

