def max(a, b):
    if a > b:
        result = a
    elif a < b:
        result = b
    elif a == b:
        result = a
    else:
        print("oops")
    return result

x = int(input("Num 1: "))
y = int(input("num 2: "))

print(max(x, y))