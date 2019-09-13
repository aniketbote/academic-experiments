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
    for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
