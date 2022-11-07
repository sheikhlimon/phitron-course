from itertools import permutations

def anagrams(x):
    s = {}
    while len(x) > 0:
        x1 = x.pop()
        s[x1] = s.get(x1, [])
        s[x1].append(x1)
        i = 0
        while i < len(x):
            z1 = x[i]
            perm = [''.join(p) for p in permutations(x1)]
            if z1 in perm:
                x.remove(z1)
                s[x1].append(z1)
            else:
                i +=1
    return s.values()


out = anagrams(['eat', 'ate', 'done', 'tea', 'soup', 'node'])

print(out)
