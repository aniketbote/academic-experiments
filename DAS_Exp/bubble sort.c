#include<stdio.h>
void main ()
{
    int a[100],i,j,n,temp;
    printf("Enter the number of elements you want:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is:");
    for(i=0;i<=n-1;i++)
    {
        printf("\n%d",a[i]);
    }
}

