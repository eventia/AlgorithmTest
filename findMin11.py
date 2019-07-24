arr = []
# 5
# 9 5 2 7 4

n = input()  # 5
a = input()  # "9 5 2 7 4"
tmp = a.split() # ["9", "5", "2", "7", "4"]

for i in tmp:
    arr.append(int(i))  # int(i)    arr = [9, 5, 2, 7, 4]

min = arr[0]

for i in arr:
    if i< min:
        min = i

print(min)

