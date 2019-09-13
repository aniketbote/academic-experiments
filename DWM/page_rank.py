##import math
##n  = int(input('Enter the number of nodes'))
##adj = [[0 for i in range(n)] for j in range(n)]
##print(adj)
##for  i in range(n):
##    for j in range(n):
##        print('Enter the link for {} to {}'.format(i,j))
##        adj[i][j] = int(input())
##
##print(adj)
##
##initial = float(1/n)
##pagerank = [initial] * n
##
##k=1
##out = 0
##while k<=2:
##    temp = pagerank
##    pagerank = [0]*n
##    for x in range(n):
##        for y in range(n):
##            if adj[y][x] == 1:
##                p=0
##                out = 0
##                while p<n:
##                    if adj[y][p] == 1:
##                        out+=1
##                    p+=1
##                pagerank[x] = pagerank[x]+ float(temp[y]/out)
##    for i in range(n):
##        print(pagerank[i])
##    k+=1
##
##for i in range(n):
##    pagerank[i] = float(0.15/n) + 0.85*pagerank[i]
##    print("Page Rank for",i+1," node is ",pagerank[i])
    


import math
n=int(input("Enter Number Of Nodes:"))

Adj = [[0 for i in range(n)]for j in range(n)]
print(Adj)

print("Enter 1 for link to A -> B \n 0 for no link")
for i in range(n):
    print("Enter links from node")
    for j in range(n):
        print("%d to %d "%(i,j))
        Adj[i][j]=int(input())



initial=float(1/n)
pagerank=[initial]*n

print(pagerank)

k=1
out=0
while(k<=2):
    temp=pagerank
    pagerank=[0]*n
    for x in range(n):
        print('x______X______x')
        for y in range(n):
            print('y----------y')
            print(Adj[y][x])
            if(Adj[y][x]==1):
                p=0
                out=0
                while(p<n):
                    print('W________________W')
                    print(y,p)
                    print(Adj[y][p])
                    if(Adj[y][p]==1):
                        out=out+1
                    p=p+1

                pagerank[x]=pagerank[x]+float(temp[y]/out)
                print(pagerank[x])
    print("Iteration",k,"\n")
    for i in range(n):
        print('i-------------------------------i')
        print("Page Rank for",i+1," node is ",pagerank[i])
    k=k+1
print("Final")
##for i in range(n):
##    pagerank[i]=float(0.15/n)+ 0.85*pagerank[i]
##    print("Page Rank for",i+1," node is ",pagerank[i])



