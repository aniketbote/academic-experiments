#include<stdio.h>

//#include<conio.h>

int a,b,u,v,n,i,j,ne=1;

int visited[10]={0},min,mincost=0,cost[10][10];

void main()

{

	//clrscr();

	printf("\nEnter the number of nodes:");

	scanf("%d",&n);

	printf("\nEnter the adjacency matrix:\n");

	for(i=1;i<=n;i++)

	for(j=1;j<=n;j++)

	{

		scanf("%d",&cost[i][j]);

		if(cost[i][j]==0)

			cost[i][j]=999;

	}
	for(i=1;i<=n;i++)
    {
	for(j=1;j<=n;j++)

	{

		printf("\t%d",cost[i][j]);

	}
	printf("\n");
    }
    visited[1]=1;
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
            for(j=1;j<=n;j++)
            if(cost[i][j]<min)
            if(visited[i]!=0)
        {
            min=cost[i][j];
            a=i;
            b=j;
        }
        if(visited[a]==0 || visited[b]==0)
        {
            printf("%d-%d cost=%d",a,b,min);
            ne++;
        mincost=min+mincost;
        visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
}


























