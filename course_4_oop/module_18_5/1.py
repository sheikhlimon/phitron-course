def run(data, a, b, c, d):
    result = data[a:b+1]+" "+data[c:d+1]
    print(result)


data = "HumptyDumptysatonawallHumptyDumptyhadagreatfallAlltheKingshorsesandalltheKingsmenCouldntputHumptyDumptyinhisplaceagain."

a = 22; b = 27; c = 97; d = 102
run(data, a, b, c, d)