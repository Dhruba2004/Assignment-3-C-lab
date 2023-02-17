#include<stdio.h>
#include<math.h>
main (){
float a,b,c,x,y,r;
printf("Enter the value:");
scanf("%f%f%f",&a,&b,&c);
x=-a/2;
y=-b/2;
r=sqrt(pow(a/2,2)+pow(b/2,2)+c);
printf("%f",r);
printf("%f%f",x,y);
}