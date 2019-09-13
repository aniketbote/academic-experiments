#include<stdio.h>
int x=0;
int ht[100];
int key_index[100][2];
void Storing();
void Searching();
int main()
{
    int m,n,a,i;
    for(i=0;i<100;i++)
    {
        ht[i]=-1;

    }

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
return 0;
}
void Storing()
{   int k,i,j,n,a[100];

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
                if(j>0)
                {
                    key_index[x][0]=a[i];
                    key_index[x][1]=j;
                    x++;
                }
                break;
            }
        }
    }
    printf("\n");
    printf("Hash table elements are in following order :\n");
    for(i=0;i<100;i++)
    {
        printf("%d\t",i);

    }
     printf("\n");
    for(i=0;i<100;i++)
    {
        printf("%d\t",ht[i]);

    }
    printf("\n\n\n");
    printf;
}


void Searching()
{
    int k,key,i,index;
    printf("Enter number to be searched :\n");
    scanf("%d",&key);
    k=((key%10))%10;
        if(ht[k]==key)
        {
            printf("Value is present at index %d.\n\n",k);
        }
        else
        {
            for(i=0;i<100;i++)
            {
                if(key_index[i][0]==key)
                {
                    index=k+key_index[i][1];
                    printf("Value is present at index %d.\n\n",index);
                    for(i=)
                    break;
                }
            }
        }
}

