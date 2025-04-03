// palindrome number 
#include <stdio.h>

int main()
{   int a;
int d =0;
int num = 0;
scanf("%d",&a);
int i = a;
 for( ;i>0;i = i/10)
{
 d = i%10;
 num = num*10 + d;
}
printf("%d ",num);
if(num==a)
{printf("palindrome");}
else 
{printf("non palindrome");}
    return 0;
}