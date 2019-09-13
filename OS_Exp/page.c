#include<stdio.h>
void main()
{
int i,j,n,a[50],frame[10],no,k,avail,count=0;
printf("\nEnter no of pages=");
scanf("%d",&n);
printf("\nEnter page nos=");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter no of frames=");
scanf("%d",&no);
for(i=0;i<no;i++)
frame[i]= -1;
j=0;
printf("\tArray\t \tFrames\n");
for(i=1;i<=n;i++)
{
printf("\t%d\t\t",a[i]);
avail=0;
for(k=0;k<no;k++)
if(frame[k]==a[i])
avail=1;
if (avail==0)
{
frame[j]=a[i];
j=(j+1)%no;
count++;
for(k=0;k<no;k++)
printf("%d\t",frame[k]);
}
printf("\n");
}
printf("page fault=%d",count);
}
