#include <stdio.h>
#include <math.h>
int main()
{ float a,b,c;
printf("enter coefficient of x^2\n");
scanf("%f",&a);
printf("enter coefficient of x\n");
scanf("%f",&b);
printf("enter coefficient of x^0\n");
scanf("%f",&c);
if(b*b-4*a*c>=0)
{
float root1 = (-b-sqrt(b*b-4*a*c))/2*a;
float root2 = (-b+sqrt(b*b-4*a*c))/2*a;
printf("roots are %f,%f",root1,root2);
}
else
{
printf("imaginary roots");}
return 0;
}
