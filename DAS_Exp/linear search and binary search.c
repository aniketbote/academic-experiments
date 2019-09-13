#include<stdio.h>
void bin(void);
void lin(void);
void main()
{
int k;
 printf("select option \n1:binary search \n2:linear search :");
 scanf("%d",&k);
 switch(k)
 {
  case 1:
    {
        bin();
    }
break;
 case 2:
    {
        lin();
    }
break;
 }
}
void bin(void)
{
int a[100],i,j,n,beg=0,mid = 0,end,pos,x,temp;
 printf("Number of data items : \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n-1-i;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]= temp;
         }
     }
 }
 end = n-1;
 pos = -1;
 printf("Enter number to be searched :\n");
 scanf("%d",&x);
  while(beg<=end)
    {
    mid = (beg+end)/2;
    if(a[mid]==x)
        {
            pos = mid;
            printf("element found at position %d",pos+1);
            break;
        }
    else if(a[mid]>x)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
}
void lin(void)
{
    int a[100],i,j,n,x;
    printf("Number of data items : \n");
    scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
    printf("Enter number to be searched :\n");
    scanf("%d",&x);
 for(i=0;i<n;i++)
{
    if(a[i]==x)
    break;
}
if(i<n)
    printf("Number present at position %d",i+1);
else
    printf("Number not found");
}
