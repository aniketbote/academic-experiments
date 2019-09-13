#include<stdio.h>
main()
{
    int n,i,j,k,m;
    printf("Enter the no of terms =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {

              printf("  ");

        }
        for(k=1;k<=i;k++)
            {
                printf(" %d",k);
            }
            for(m=i-1;m>=1;m--)
            {
             printf(" %d",m);
            }
        printf("\n");
    }
}

