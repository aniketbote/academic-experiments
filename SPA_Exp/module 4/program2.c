#include<stdio.h>
main()
{
    int m,n,i,j;
    printf("enter the rows and columns=");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("enter matrix 1 =");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
     printf("enter matrix 2 =");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("\nthe sum of matrices is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf(" %3d",c[i][j]);
            printf("\n");
    }
     printf("\n the transpose of matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%3d",c[j][i]);
            printf("\n");
    }
}
