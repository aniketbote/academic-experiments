#include<stdio.h>
main()
{
    int n,a,b,c,i;
    printf("Enter the no of terms=");
    scanf("%d",&n);
    a=0;
    b=1;
    printf(" %d %d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
}