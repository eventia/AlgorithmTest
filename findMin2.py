arr = []

n = input()
a = input()
tmp = a.split()

for i in tmp:
    arr.append(int(i))

min = arr[0]

for i in arr:
    if (i < min):
        min = i

print(min);
