%{
#include<stdio.h>
#include<stdlib.h>
int i;
int ec=0;
int oc=0;
%}

/* defined section */

%%
[0-9]+ {i=atoi(yytext); if(i%2==0) ec++; else oc++;};
end  return 0;
%%
int yywrap(){}
int main()
{
yylex();
printf("\n number of even %d\n",ec);
printf("\n number of odd %d\n",oc);
}
