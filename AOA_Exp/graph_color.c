#include<stdio.h>
int G[10][10],m,x[10],i,j,n,a,b;
void graphcolor(int k)
{
    x[k]=1;
    for(i=0;i<k;i++)
    {
        if(G[i][k]!=0 && x[k]==x[i])
            x[k]=x[i]+1;
    }
}
//void mcoloring(int,int);
int main()
{
 n=4;
 m=3;
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
        scanf("%d",&G[i][j]);
 }
 for(i=0;i<n;i++)
 {
     graphcolor(i);
 }
 for(i=0;i<n;i++)
 {
     printf(" %d ",x[i]);
 }
 return 0;
}
/* mcoloring(1,n);
 printf("\n The Vertices To be Coloured As...\n");
  for(i=1;i<=n;i++)
    printf("\n V%d:=%d",i,x[i]);
 return 0;
}
void nextvalue(int k,int n)
{
 while(1)
 {
  a=x[k]+1;
  b=m+1;
  x[k] = a%b;
  if(x[k]==0) return;
  for(j=1;j<=n;j++)
  {
   if(G[k][j] && x[k]==x[j])
     break;
  }
  if(j==n+1) return;
   }
}
void mcoloring(int k,int n)
{
  nextvalue(k,n);
  if(x[k]==0) return;
  if(k==n)  return;
  else mcoloring(k+1,n);
}*/
