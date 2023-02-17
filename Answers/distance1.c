#include<stdio.h>
#include<math.h>
main (){
    double a,b,c,d,e,f;
    printf("Enter five points");
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    f=(a*c+b*d+e)/sqrt(c*c+d*d);
    printf("%lf",f);

}