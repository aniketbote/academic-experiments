#include<stdio.h>
int greatest(a,b,c)
{
    if(a>b && a>c)
        return a;
    else if (b>c)
        return b;
    else
        return c;
}
void main()
{
    int e,f,g,z;
    printf("enter the three numbers :");
    scanf("%d%d%d",&e,&f,&g);
    z=greatest(a,b,c);
    printf("%d is the largest",z);
}
