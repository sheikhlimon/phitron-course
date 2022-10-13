count = 0

keep_going = True

while keep_going:
    choice = input("Enter input: ")
    if choice == "Quit":
        keep_going = False
        break
    elif int(choice) > 0:
        print(str(choice) + " is positive")
    elif int(choice) == 0:
        print(str(choice) + " is zero")
    else:
        print(str(choice) + " is negative")
    count += 1
