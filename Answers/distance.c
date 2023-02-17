#include<stdio.h>
#include<math.h>
main ()
{
int x1,x2,y1,y2,x;
double y;
printf("Enter the four points");
scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
scanf("%lf",&y);
x=((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
y=sqrt(x);
printf("The distance between two points is%lf",y);
}