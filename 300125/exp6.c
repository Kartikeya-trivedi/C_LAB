//janhvi's logic
#include<stdio.h>
int main()
{
int a,rev=0,r;
scanf("%d",&a);
int num=a;
while(a>0)
{
r=a%10;
rev=rev*10+r;
a=a/10;
}
if(num==rev)
{printf("palindrome no. it is");}
else
{printf("not a palindrome no.");}
return 0;
}