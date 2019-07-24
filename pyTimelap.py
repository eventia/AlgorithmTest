import time
s = time.time()
n = 10000
tmp = 0

for i in range(n):
    for j in range(n):
        tmp = tmp + 1

e = time.time()
print(e-s)
print(tmp+123456)

# C : 0.136 sec
# Python : 13.10 sec
# PyPy : 0.146497