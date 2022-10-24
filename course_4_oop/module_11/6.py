def func(arg1, arg2, arg3=4, arg4=5):
    print(arg1, arg2, arg3, arg4)

func(3, 4, arg2=1)

# 6 7 4 5
# 4 5 6 5
# error arg1 and arg2 parameter missing
# error multiple values for arg2