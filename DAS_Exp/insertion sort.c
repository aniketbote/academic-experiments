#include <stdio.h>
void main()
{
  int n, a[100], i, j, t;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for (i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

  for (i=1;i<=n-1;i++)
    {
    j=i;
    while (j>0 && a[j]<a[j-1])
        {
        t=a[j];
        a[j]=a[j-1];
        a[j-1]=t;
        j--;
        }
    }
  printf("Sorted list in ascending order:\n");
  for (i=0;i<=n-1;i++)
    {
    printf("%d\n",a[i]);
    }
}
