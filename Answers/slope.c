#include<stdio.h>
#include<math.h>
main (){
double a,b,c,m,q;
printf("Enter three sides");
scanf("%lf%lf%lf",&a,&b,&c);
m=-a/b;
q=atan(m)*(180/3.14);
printf("The value of slope is%lf",m);
printf("\nThe value of the angle in degree is %lf",q);
}