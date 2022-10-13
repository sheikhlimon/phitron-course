def find_digits_chars_sysmbols(sample_str):
    upper_count = 0
    lower_count = 0
    digit_count = 0
    symbol_count = 0
    for char in sample_str:
        if str.isupper(char):
            upper_count += 1
        elif str.islower(char):
            lower_count += 1
        elif str.isdigit(char):
            digit_count += 1
        else:
            symbol_count += 1
    print("Uppercase =", upper_count, "Lowercase =",
          lower_count, "Digits =", digit_count, "Symbol =", symbol_count)


sample_str = input()

find_digits_chars_sysmbols(sample_str)
