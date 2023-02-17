#include<stdio.h>
#include<math.h>
main (){
float x,y,z;
printf("Enter the value of angle :");
scanf("%f",&x);
y=acos(x);
z=(y*180)/3.14;
printf("%f",y);
printf("\n%f",z);
}