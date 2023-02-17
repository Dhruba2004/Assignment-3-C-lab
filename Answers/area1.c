#include<stdio.h>
#include<math.h>
main (){
float p,q,r,s,t,u,n,a,b,c;
printf("Enter:");
scanf("%f%f%f%f%f%f",&p,&q,&r,&s,&t,&u);
a=sqrt((p-r)*(p-r)+ (q-s)*(q-s));
b=sqrt((p-t)*(p-t)+ (q-u)*(q-u));
c=sqrt((p-r)*(p-r)+ (q-s)*(q-s));
s=(a+b+c)/2;
n=sqrt (s*(s-a)*(s-b)*(s-c));
printf("%f",n);
}