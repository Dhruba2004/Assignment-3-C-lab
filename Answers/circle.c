#include<stdio.h>
#include<math.h>
main (){
float a,b,c,x,y,r;
printf("Enter the value:");
scanf("%f%f%f",&a,&b,&c);
x=-a;
y=-b;
r=sqrt(a*a+b*b-c);
printf("%f",r);
printf("%f%f",x,y);
}