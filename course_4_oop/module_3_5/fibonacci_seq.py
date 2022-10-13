first, second = 0, 1

print("Fibonacci sequence: ")

for i in range(10):
    print(first, end=" ")
    fibo = first + second

    first = second
    second = fibo
