#include<stdio.h>
main()
{
  int i,n,l;
  printf("enter the lenght of array=");
  scanf("%d",&l);
  int a[l];
  printf("enter the numbers=");
  for(i=0;i<l;i++)
            scanf("%d",&a[i]);
  printf("enter the number to be searched=");
  scanf("%d",&n);
  for(i=0;i<l;i++)
  {
      if(a[i]==n)
      {
        printf("the position of number is %d",i);
        break;
      }
  }
  if(i==l)
    printf("no not found");
    return 0;
}
