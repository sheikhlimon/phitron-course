def replace_word(text):
    replace_with = ["chief", "thief", "superintendent",
                    "sweeper", "married", "left", "tried", "died"]

    for elem in text.split():
        for index, word in enumerate(replace_with):
            if word == elem:
                text = text.replace(elem, replace_with[index+1])
    return text


s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."

output = replace_word(s)
print(output)
