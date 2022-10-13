for row in range(0, 7):
    for column in range(0, 7):
        if row == 7 and column == 1:
            result_str = result_str+"* "
        else:
            result_str = result_str+"  "
    result_str = result_str+"\n"
print(result_str)
