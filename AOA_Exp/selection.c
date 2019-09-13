#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a[100],n,i,min,j;
    printf("Enter the elements of array=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the elements=");
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {

                min=j;
            }
        }
    swap(&a[min],&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
