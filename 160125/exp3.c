#include <stdio.h>
int main()
{ int num;
int d1,d2,d3,d4,d5;
printf("enter a three digit number");
   scanf("%d",&num);
d1=num/100;
d2=num%10;
d3=num%100;
d4=d3/10;
d5= d2*100+d4*10+d1;
    printf("reverse = %d",d5);
   return 0; 
}