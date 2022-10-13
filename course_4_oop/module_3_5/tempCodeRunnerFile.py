def find_digits_chars_sysmbols(str):
    char_count = 0
    digit_count = 0
    symbol_count = 0
    for char in str:
        if char.isalpha():
            char_count += 1
        elif char.isdigit():
            digit_count += 1
        else:
            symbol_count += 1
    print("Chars =", char_count, "Digits =", digit_count, "Symbol =", symbol_count)

str = input()

find_digits_chars_sysmbols(str)
