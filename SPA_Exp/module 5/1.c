#include<stdio.h>
void main()
{
    int i,c=0,d=0,j;
    char a[30],b[30];
    puts("enter both string");
    gets(a);
    gets(b);
    for(j=0;b[j]!='\0';j++);
    for(i=0;a[i]!='\0';i++);
    if(i>j)
        j=i;
           for(i=0;i<j;i++)
        {
            if(tolower(a[i])<tolower(b[i]))
            {
                c++;
                break;
            }
            else if(tolower(a[i])>tolower(b[i]))
            {
                d++;
                break;
            }
        }

        if(c==1)
        {
            printf("\nThe first string :\n");
            puts(a);
        }
        else if(d==1)
        {
            printf("\nThe first string :\n");
            puts(b);
        }
        else
            puts("\nBoth strings are same\n");


}
