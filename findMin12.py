n = input()

arr = list(map(int, input().split()))

min = arr[0]

for i in arr:
    if i< min:
        min = i

print(min)

