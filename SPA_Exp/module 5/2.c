#include<stdio.h>
void main()
{
    char a[50],b[50];
    int c=0,d=0,e=0,f=0,i;
    puts("Enter the string");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=tolower(a[i]);
        if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
            c++;
        else if(b[i]>='0' && b[i]<='9')
            d++;
        else if(b[i]==' ')
            e++;
        else
            f++;
    }
    printf("\nVowels : %d\nDigits : %d\nWhite space : %d\nConsonants : %d\n",c,d,e,f);
    printf("%d",a[0]);
}
