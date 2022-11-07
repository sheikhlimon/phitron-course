pageNo = 0
s = ""
file = open('Books.txt', 'r')
pages = file.read().strip().split("--")
totalPages = len(pages)
print(pages[pageNo])
while True:
    str1 = input(
        "[enter - read more, press q to quit]\n")
    if (str1 == "q"):
        exit()
    elif str1 == "":
        if (pageNo+1) < totalPages:
            pageNo += 1
            print(pages[pageNo])
    else:
        n = int(str1)
        if n > 0:
            if n <= totalPages:
                pageNo = n-1
                print(pages[pageNo])
        
            
            
            

