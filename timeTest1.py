import time

s = time.time()
n = 10**7

tmp=0
for i in range(n):
	tmp=tmp+1

e = time.time()

print(e-s)
print(tmp+123456)