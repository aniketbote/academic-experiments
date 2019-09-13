#include<stdio.h>
#include<string.h>
void  main()
{
    char a[30][1],t[30];
    int n,i,j;
    printf("Enter the no of names=");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        gets(a[i]);
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
              strcpy(t,a[i]);
              strcpy(a[i],a[j]);
              strcpy(a[j],t);
            }
        }
    }
    printf("\nThe sorted names are : \n");
    for(i=0;i<=n;i++)
    {
        puts(a[i]);
    }
}
