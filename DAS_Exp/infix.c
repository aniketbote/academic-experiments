#include<stdio.h>
 #include<string.h>
  #include<ctype.h>
  #include<math.h>
  int stack[50],top=-1; char infix[50],postfix[50]; void push(char n) { top=top+1; stack[top]=n;} char pop() { char e;   e=stack[top]; top=top-1; return e; } int priority(char c) {  switch(c) {  case '^': return 3; break; case '/': case '*': case '%': return 2; break;
case '+': case '-': return 1; break; default: return 0; break;  } } void convert() { int i=0,j=0;char g; char k; push('('); while(infix[i]!='\0')    {        k=infix[i]; if(isalnum(k))     {   postfix[j]=k; j++;    } else if(k=='(') push(k); else if(k==')')    { while(stack[top]!='(')    { char a;   a=pop();
postfix[j]=a; j++; } g=pop(); } else { int p; p=priority(k); if(priority(stack[top])<p) push(k); else             { while((priority(stack[top])>=p)||(stack[top]!='('))            { char a;                a=pop(); postfix[j]=a; j++; } push(k);     } } i++; } postfix[j]='\0'; } void evaluate () { top=-1;char k,a,b;int i=0,c,d;
while(postfix[i]!='\0')    {      k=postfix[i]; if(isalnum(k)) push(k); else      {       a=pop();       b=pop();       c=a-48;       d=b-48; switch(k)       { case '+': push((d+c)+48); break; case '-': push((d-c)+48); break; case '/': push((d/c)+48); break; case '*': push((d*c)+48); break; case '^': push((pow(d,c))+48); break;       } }
i++;    } printf("\nAnswer of given expression is %d",(pop()-48)); } int main() { int l; printf("Enter infix expresion\n"); gets(infix);   l=strlen(infix); infix[l]=')'; infix[l+1]='\0'; convert(); printf("\nPostfix expression is\n%s",postfix); evaluate(); return 0; }
