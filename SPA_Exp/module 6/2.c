#include<stdio.h>
float area(float l)
{
    float a;
    a=l*l;
    return a;
}
float peri(float l)
{
    float p;
    p=4*l;
    return p;
}

void main()
{
    int ch;
    float l,z,x;
    printf("enter the lenght of square :");
    scanf("%f",&l);
    printf("select the option:\n1.AREA\n2.PERIMETER\n");
    scanf("%d",&ch);
  switch(ch)
    {
     case '1' :
          z=area(l);
           printf("AREA = %f",z);
         break;
       case '2' :
            x=peri(l);
           printf("PERIMETER = %f",z);
           break;
    }
}

