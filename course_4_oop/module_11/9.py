class Two:
    def __init__(self, x, n):
        self.x = x
        self.n = n
    
    def sum(self):
        return self.x + self.n
    
    def pow(self):
        if self.n == 0:
            return 1
        elif self.n == 1:
            return self.x
        else:
            return(self.x*pow(self.x, self.n-1))

obj = Two(2, 3)
sum2 = obj.sum()
pow2 = obj.pow()

print(sum2)
print(pow2)