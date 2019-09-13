#include<stdio.h>
int a,b,u,v,n,i,j,ne=1;

int parent[10],min,mincost=0,cost[10][10];
int find(int i)
{
    while(parent[i])
        i=parent[i];
        return i;
}
int uni(int i, int j)
{
    if(i!=j)
    {
      parent[j]=i;
      return 1;
    }
    return 0;
}
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
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(min>cost[i][j])
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            printf("edge=%d (%d,%d) weight=%d\n",ne++,a,b,min);
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
}




















