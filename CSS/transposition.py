text = 'Geeks for Geeks'
n = 4
mat = []
key = '2314'
for i in range(n):
    mat.append(list())

for i in range(len(text)):
    mat[i%n].append(text[i])

print(mat)
result =''
for i in range(len(key)):
    temp = ''.join(mat[int(key[i])-1])
    result += temp     

print(result)
