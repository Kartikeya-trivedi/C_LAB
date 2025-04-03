#include <stdio.h>
int main()
{printf("enter temperature in fahrenheit");
float f;
scanf("%f",&f);
float c;
c=(f-32)*5/9;
printf("celcius = %f",c);
   return 0; 
}