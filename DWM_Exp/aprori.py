def makesets(a):
	b=[]
	for x in range(0,len(a)):
		for y in range(x+1,len(a)):
			c=merge(a[x],a[y])
			if(c not in b):
				b.append(c)

	return(b)

def inset(a,b):
	c=0
	for x in a:
		for y in b:
			if(x==y):
				c=c+1
	if (c==len(a)):
		return True
	return False

def merge(a,b):
	c=[]
	for x in a:
		if(x not in c):
			c.append(x)

	for x in b:
		if(x not in c):
			c.append(x)
	c = sorted(c)
	return c


given_set= [[1,3,4],[2,3,5],[1,2,3,5],[2,5]]

def findfreq(a):
	freq=0
	for x in given_set:
		if(inset(a,x)):
			freq=freq+1
	return freq


th=3

f1=0
f2=0
f3=0
f4=0
f5=0

for x in given_set:
	for y in x:
		if(y==1):
			f1=f1+1
		if(y==2):
			f2=f2+1
		if(y==3):
			f3=f3+1
		if(y==4):
			f4=f4+1
		if(y==5):
			f5=f5+1

fset=[]

if(f1>=th):
	fset.append([1])
if(f2>=th):
	fset.append([2])
if(f3>=th):
	fset.append([3])
if(f4>=th):
	fset.append([4])
if(f5>=th):
	fset.append([5])


tset=[]
for x in range(1,5):
	tset=[]
	for y in fset:
		if(len(y)==x):
			tset.append(y)
	sset=makesets(tset)
	for x in sset:
		if(findfreq(x)>=th):
			fset.append(x)

print(fset)
