#include<stdio.h>
#include<math.h>
main()
{
    int n,a,n1,n2,i,s;
    printf("Enter the no =");
    scanf("%d",&n);
    i=0;
    n1=n;
    n2=n;
    s=0;
    while(n1!=0)
    {
        n1=n1/10;
        i++;
    }
    do
    {
        a=n2%10;
        s=s+pow(a,i);
        n2=n2/10;
    }
    while(n2!=0);
    if(s==n)
    printf("%d is an ARMSTRONG NO.",n);
    else
    printf("%d is NOT AN ARMSTRONG NO.",n);
}
