def exp(a, n):
    num = n
    result = 1
    while num > 0:
        result = result * a
        num = num - 1
    return result

a, n = map(int, input("Enter numbers: ").split())
print(exp(a,n))
