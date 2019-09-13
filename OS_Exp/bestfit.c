#include<stdio.h>
struct memo
{
    int size;
    int status;
};
void main()
{
    struct memo mem[5],temp;
    int i,j,k;
    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("Enter the mem size=");
        scanf("%d",&mem[i].size);
        mem[i].status=-1;
    }
    /*for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(mem[i].size>mem[j].size)
                {
                    temp=mem[i];
                    mem[i]=mem[j];
                    mem[j]=temp;
                }
            }
        }*/
        int pg[5];
        printf("Enter the process size=");
        for(i=0;i<5;i++)
        {
            scanf("%d",&pg[i]);
        }
        j=0;
        for(i=0;i<5;i++)
        {
            //for(j=0;j<5;j++)
            //{
                if(pg[j]<=mem[i].size && mem[i].status==-1)
                {
                   // printf("Entered loop");
                    mem[i].status=pg[j];
                    j=j+1;
                    continue;
                }
            //}
        }
        for(i=0;i<5;i++)
        {
            printf("Size=%d \t process=%d\n",mem[i].size,mem[i].status);
        }

}
