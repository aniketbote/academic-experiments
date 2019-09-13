#include<stdio.h>
int ht[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
void Storing();
void Searching();
int main()
{
    int m,n;
    do
    {
    printf("Enter your choice :\n1.For storing\n2.For searching\n3.To terminate\n");
    scanf("%d",&m);
    switch (m)
    {
        case 1:
        Storing();
        break;
        case 2:
        Searching();
        case 3:
        break;
    }
    }
    while(m!=3);

}
void Storing()
{   int k,i,j,n,a[10];
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    printf("Enter elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<10;j++)
        {
            k=((a[i]%10)+j)%10;
            if(ht[k]==-1)
            {
                ht[k]=a[i];
                break;
            }
        }
    }
    printf("\n");
    printf("Hash table elements are in following order :\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",i);

    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",ht[i]);

    }
    printf("\n\n\n");
}


void Searching()
{
    int k,key,i;
    printf("Enter number to be searched :\n");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        k=((key%10)+i)%10;
        if(ht[k]==key)
        {
            printf("Value is present at index %d.\n\n",k);
            break;
        }
    }
}

