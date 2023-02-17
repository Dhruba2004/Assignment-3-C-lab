#include<stdio.h>
#include<math.h>
main() {
int a,b,c,s,r;
float p;
printf("Enter three sides");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    r=s*(s-a)*(s-b)*(s-c);
    p=sqrt(r);
    printf("The area of the triangle is %f",p);
}