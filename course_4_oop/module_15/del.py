BOOKED = 1
x = [[0,0,0,0,0], [0,0,0,0,1], [0,1,0,0,0]]
letter_to_index = {"A": 0, "B": 1, "C": 2}
digit_to_index = {"1": 0, "2": 1, "3": 2, "4": 3, "5": 4}

def book(seat):
    # Convert each seat character to integer.
    row = letter_to_index[seat[0]]
    col = digit_to_index[seat[1]]
    print(x[row][col])

    if x[row][col] == BOOKED:
        return False
    else:
        # Book the seat and return True
        x[row][col] = BOOKED
        return True


if __name__ == '__main__':
    print(book('A5'))  # -> True

    # Try doing it again.
    print(book('A5'))  # -> False