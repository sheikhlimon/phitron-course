with open('center.txt', 'r') as file:
    lines = file.readlines()
    for line in lines:
        print(line.center(50))
