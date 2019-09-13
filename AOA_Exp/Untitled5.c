#include<stdio.h>
 #include<math.h>

 int main() {
     int x1,y1,a,b,direction,c,x2,y2,xnew,ynew;

     scanf("%i", &direction);
     scanf("%i %i", &x1, &y1);
     scanf("%d",&a);
     scanf("%i %i", &x2, &y2);

     float PI = 3.1415926535897932384626;
     float theta = ((a)*PI)/180;
     int tx=x2;

     int ty=y2;

     int xt=x1-tx;
     int yt=y1-ty;
     printf("%d,%d\n\n",x2-tx,y2-ty);

     if (direction==1)
     {
          xnew =( (xt) * ((cos(theta))) - (yt) * sin(theta));
          ynew =( (xt) * ((sin(theta))) + (yt) * cos(theta));

          printf("%i %i", xnew+tx, ynew+ty);
     }

     if (direction==0)
     {

           xnew= (xt) * cos(theta) - (yt) * sin(theta);
          ynew= (yt) * cos(theta) + (xt) * sin(theta);
          printf("%i %i", (xnew+tx), (ynew+ty));
     }
     return 0;
}
