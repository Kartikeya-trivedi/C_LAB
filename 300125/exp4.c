// sum of cubes of digit = number itslef armstrong
#include <stdio.h>
int main()
{ int n;
int r;
int sum = 0;
 scanf("%d",&n);
 int num = n;
while(n>0)
{
r=n%10;
sum = sum + r*r*r;
n=n/10;
}
if(num==sum)
{printf("armstrong no. it is");}
else
{printf("not a armstrong no.");}
return 0;
}
    