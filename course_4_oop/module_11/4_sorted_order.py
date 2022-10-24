string = 'x3b4U5i2'

new_string = ''

for character in string:
    if character.isdigit():
        new_string += new_string[-1] * (int(character) - 1)
    else:
        new_string += character

sorted_string = ''.join(sorted(new_string, key=str.casefold))

print(sorted_string)