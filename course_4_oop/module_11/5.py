n = int(input("Enter number of students: "))

std_dict = []

for i in range(1, n+1):
    name = input()
    mark = int(input())
    std_dict.append({i:{"student_name":name,"student_mark": mark}})

print(str(std_dict))

# f = open("out.txt", "a")
# f.write(str(std_dict))
# f.close()