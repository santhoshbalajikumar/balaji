#include<stdio.h>
#include<math.c>
void main()
{
double base,exponent,result;
printf("Enter the base number");
scanf("%lf",&base);
printf("Enter the exponent");
scanf("%lf",&exponent);
result=pow(base,exponent);
printf("%.1lf^%.1lf=%.2lf",base,exponent,result);
}
