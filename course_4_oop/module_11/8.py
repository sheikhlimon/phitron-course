def twoSum(nums, target):
       lookup = {}
       for i, num in enumerate(nums):
           if target - num in lookup:
               return (lookup[target - num], i )
           lookup[num] = i
        

nums = list(map(int,input("numbers: ").strip().split(",")))
target = int(input("targer: "))
output = twoSum(nums, target)
print(output)