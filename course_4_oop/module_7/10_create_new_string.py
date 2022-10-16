def create_new_string(text):
    a = ['oh', 'Emelia', 'to']

    str1 = []

    for elem in text.split():
        for word in a:
            if word == elem:
                str1 = str1.append(elem)
    return str1


s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

output = create_new_string(s)

with open('out.txt', 'w') as fileWrite:
    fileWrite.write(output)