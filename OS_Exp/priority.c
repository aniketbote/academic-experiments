#include<stdio.h>
struct pro
{
    char name;
    int at;
    int bt;
    int pt;
};
void main()
{
    int i,j,k;
    struct pro temp;
    struct pro p[5];
    struct pro t[5];
    int time=0;
    for(i=0;i<5;i++)
    {
    fflush(stdin);
    printf("Enter the name of process=");
    scanf("%c",&p[i].name);
    printf("Enter the at Nd bt of process=");
    scanf("%d%d",&p[i].at,&p[i].bt);
    printf("Enter the priority of process=");
    scanf("%d",&p[i].pt);
    t[i]=p[i];

    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(p[i].at<p[j].at)
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(t[i].pt<t[j].pt)
            {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }

    //printf("its working");
    //int ft[5]={0,0,0,0,0};
    for(i=0;i<5;i++)
    {
        //printf("for is       its working");
        if(i==0)
        {
            //ft[i]=p[i].at+p[i].bt;
            //printf("name=%c\t turnaround time=%d\t waitng time=%d\n",p[i].name,ft[i]-p[i].at,ft[i]-p[i].at-p[i].bt);
            //time=ft[i];
            time=p[i].at+p[i].bt;
            printf("name=%c\t turnaround time=%d\t waitng time=%d\n",p[i].name,time-p[i].at,time-p[i].at-p[i].bt);
            for(k=0;k<5;k++)
            {
                if(p[i].name==t[k].name)
                {
                    t[k].pt=999;
                }
            }


        }


        else
        {
            for(j=0;j<5;j++)
            {
                if(t[j].at<time && t[j].pt!=999)
                {
                    //printf("name=%c\t turnaround time=%d\t waitng time=%d\n",t[j].name,time-t[i].at,time-t[i].at-t[i].bt);
                    time=time+t[j].bt;
                    printf("name=%c\t turnaround time=%d\t waitng time=%d\n",t[j].name,time-t[j].at,time-t[j].at-t[j].bt);
                    //ft[i]=
                    t[j].pt=999;
                    break;
                }


            }
        }
    }
    /*for(i=0;i<5;i++)
    {
        printf("name=%c\t turnaround time=%d\t waitng time=%d\n",p[i].name,ft[i]-p[i].at,ft[i]-p[i].at-p[i].bt);
    }*/
}
