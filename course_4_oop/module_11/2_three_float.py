def add(a, b, c):
   return a+b+c
 
a, b, c = map(float, input("Enter Numbers: ").split('-'))
 
output = add(a,b,c)
print(output)