#include <stdio.h>
int main()
{ float basic;
printf("Enter basic salary\n");
scanf("%f",&basic);
float hra,da;
if(basic <= 10000)
{hra = basic*20/100;
da  = basic*80/100;}
else if(basic>10000 && basic<=20000)
{hra = basic*25/100;
da  = basic*90/100;}
else
{
hra = basic*30/100;
da  = basic*95/100;}
float gross = da+hra+basic;
printf("gross salary = %f",gross);

    return 0;
}