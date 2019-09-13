#include<stdio.h>
#include<math.h>
int x[10],count;
void print(int n)
{
 int i,j;
 printf("\n\nSolution %d:\n\n",++count);

 for(i=1;i<=n;++i)
  printf("\t%d",i);

 for(i=1;i<=n;++i)
 {
  printf("\n\n%d",i);
  for(j=1;j<=n;++j) //for nxn board
  {
   if(x[i]==j)
    printf("\tQ"); //queen at i,j position
   else
    printf("\t-"); //empty slot
  }
 }
}
int place(int k,int i)
{
    int j;
    for(j=1;j<=k-1;j++)
    {
        if(x[j]==i || (abs(x[j]-i))==(abs(j-k)))
            return 0;
    }
    return 1;
}
void n_queen(int k,int n)
{
   // int z;
    int i;
    for(i=1;i<=n;i++)
    {
        if (place(k,i))
        {
            x[k]=i;
            if (k==n)
            {
                print(n);
            }
            else
            {
                n_queen(k+1,n);
            }
        }

    }
}
void main()
{
    int n=8;
    //x[4]={0,0,0,0};
    n_queen(1,n);
}
