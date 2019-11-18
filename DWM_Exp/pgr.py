import math
n = int(input())

adj = [[0 for i  in range(n)] for j in range(n)]
print(adj)
for i in range(n):
    for j in range(n):
        print(i,j)
        adj[i][j] = int(input())


initial = float(1/n)
pagerank = [initial]*n

k=0
out = 0

while k<=2:
    temp = pagerank
    pagerank = [0]*n
    for x in range(n):
        for y in range(n):
            if adj[y][x] == 1:
                p=0
                out=0
                while p<n:
                    if adj[y][p] == 1:
                        out+=1
                    p+=1
                pagerank[x] = pagerank[x] + float(temp[y]/out)
    k+=1

for i in range(n):
    pagerank[i] = float(0.15/n) + 0.85*pagerank[i]
    print(pagerank[i])
