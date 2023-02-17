#include<stdio.h>
#include<math.h>
main () {
    int a,b,c,p,q,r,x,y;
    printf("Enter:");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
    x=(b*r-c*q)/(a*q-p*b);
    y=(c*p-a*r)/(a*q-p*b);
    printf("%d,%d",x,y);
}