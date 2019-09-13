%{
int ocount =0;
int kcount=0;
int icount=0;
%}

%%
if|else|while|int|switch|for|char {kcount++;}
[a-z] {icount++;}
[+|-|=|*|%|/] {ocount++;}
end return 0;
%%

int yywrap(){}
hello
int main()
{
yylex();
printf("\n number of identifier %d\n",icount);
printf("\n number of keyword %d\n",kcount);
printf("\n number of operator %d\n",ocount);
return 0;
}
