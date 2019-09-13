%{
int count =0;
int vcount=0;
int ccount=0;
int nlines=0;
int nc=0;
int nword=0;
%}

%%
" "   {nword++;}
\n {nlines++;nword++;}
[^\n\t]  {nc++;}
end {return 0;}
%%

int yywrap(){}
int main(){
yyin = 'addasds drrggfgf
        jgjhhjjh uhkkkkj'
yylex();
printf("\n number of lines is %d\n",nlines);
printf("\n number of Characters is %d\n",nc);
printf("\n number of word is %d\n",nword);
return 0;
}
