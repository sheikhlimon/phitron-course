s = "Programming Hero is the best"

## split the string 
words = s.split()

new_words = [word[::-1] for word in words]

#join the word and print
print(" ".join(new_words))