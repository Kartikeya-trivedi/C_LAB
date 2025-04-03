#include <stdio.h>
int main()
{ int a; int count =0;
scanf("%d",&a);
for(int i =1;i<=a;i++)
{
 if(a%i==0)
 { count ++;}
}
if(count > 2)
{
    printf("not prime");

}
else
{
printf("prime");
}
    return 0;
}