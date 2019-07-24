import time

def ftime():
	s = time.time()
	tmp=0
	for i in range(10000):
		for j in range(10000):
			tmp=tmp+1

	e = time.time()
	return e-s

a = ftime()

print(a)
print(ftime())

#print(tmp+123456)