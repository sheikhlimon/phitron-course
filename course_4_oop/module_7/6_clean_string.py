def clean_string(text):
    text = ''.join(letter for letter in text if letter.isalnum()) 
    return text

s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"
 
output = clean_string(s)
print(output)