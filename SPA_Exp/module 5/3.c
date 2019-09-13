#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int i,j,k;
    puts("Enter the string");
    gets(a);
    k=strlen(a);
    for(i=0,j=k-1;i<=k;i++,j--)
       {
        if(a[i]!=a[j])
            break;
       }
        if(i==k)
            printf("%s is pallindrome string",a);
        else
            printf("%s is not pallindrome string",a);


}
