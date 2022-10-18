def create_new_string(s, a):
    s = s.replace(',', '')
    s = s.replace('.', '')
    text = s.split(" ")
    ans = ''
    
    for i, word in enumerate(a):
        w = ''
        for j, val in enumerate(text):
            # temp = text[j+1]
            print(val, text[j-1])
            if word.lower() == val.lower():
                # print(word, val)
                w = text[j+1]
                print(w)
        ans += w+' '
    return ans


a = ['oh', 'Emelia', 'to']
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

f = open("out.txt", "a")
new_string = create_new_string(s, a)
f.write(new_string)
f.close
