def my_abs(value):
    if value <= 0:
        return value * -1
    return value * 1


num = int(input())

for i in range(num):
    print(my_abs(int(input())))


