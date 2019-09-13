#include<stdio.h>
#include<ctype.h>
#define s 225

struct date
{
int d;
int m;
int y;
};

struct student
{
int roll;
char name[30];
long libCard;
struct date dt;
int year;
};

struct student x[225],ht[s];

void hashsearch();
void store(struct student x[],int n);
int directhashing();

void main()
{
    int i,n;
    char ch;
    char s[4]=null;
    printf("Enter the number elements: ");
    scanf("%d",&n);
    printf("Enter the elements of the database:\n");
    for(i=0;i<n;i++)
    {
	scanf("%d",&x[i].roll,x[i].name,&x[i].libCard,&x[i].dt.d,&x[i].dt.m,&x[i].dt.y,&x[i].year);
    }
    store(x,n);
    printf("Student Database is as shown:\n");
    for(i=0;i<s;i++)
    {
	printf("%d ",ht[i].roll,ht[i].libCard,ht[i].name,ht[i].year,ht[i].dt.d,ht[i].dt.m,ht[i].dt.y);
    }
    printf("\n");
    hashsearch();
}

void store(struct student x[],int n)
{
    int i,address;
    struct student key;
    for(i=0;i<s;i++)
    {
	ht[i].libCard=-1;
	ht[i].year=-1;
	ht[i].name=s;
	ht[i].roll=-1;
	ht[i].dt.d=-1;
	ht[i].dt.m=-1;
	ht[i].dt.y=-1;
    }
    for(i=0;i<n;i++)
    {
	key.name=x[i].name;
	key.libCard=x[i].libCard;
	key.roll=x[i].roll;
	key.year=x[i].year;
	key.dt.d=x[i].dt.d;
	key.dt.m=x[i].dt.m;
	key.dt.y=x[i].dt.y;
	address=directhashing(key,i);
	ht[address]=key;
    }
}
int directhashing(struct student key,int i)
{
    int address;
    address=x[i].libCard;
    if(address==s)
    {
     return 0;
    }
    else
	return address;
}

 void hashsearch()
 {
     int address;
     struct student key;
     printf("Enter the element to be searched:");
     scanf("%d",&key.libCard);
     address=directhashing(key.libCard);

     if(strcmp(ht[address].name,null)&&ht[address].roll==-1&&ht[address].year==-1&&ht[address].dt.d==-1&&ht[address].dt.m==-1&&ht[address].dt.y==-1)
     {
	 printf("%d not found\n",key);
     }
     else
     {
	printf("%d found at position%d\n",key,address);
     }
 }
