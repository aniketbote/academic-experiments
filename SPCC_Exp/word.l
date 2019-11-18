%{
int count =0;
int vcount=0;
int ccount=0;
%}

%%
[A|E|I|O|U|a|e|i|o|u] {vcount++;}
[a-z] {ccount++;}
[A-Z] {count++;ccount++;}
end return 0;
%%

int yywrap(){}

int main()
{
yylex();
printf("\n number of capital letters is %d\n",count);
printf("\n number of vowels is %d\n",vcount);
printf("\n number of Consonants is %d\n",ccount);
return 0;
}

