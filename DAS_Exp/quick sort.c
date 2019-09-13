#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int p,int q)
{
    int pivot,j,i;
    i=p-1;
    pivot=q;
    for(j=p;j<=q;j++)
    {
        if(a[j]<=a[pivot])
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    return i;
}

void quick_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}
void main()
{
    int a[100],n,l,i;
    printf("Enter the no of elements=");
    scanf("%d",&n);
    printf("\nEnter the elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
     printf("\nThe sorted elements=");
     for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }

}
