#include <stdio.h>
int main()
{ int n,sum,r;
sum =0;
 scanf("%d",&n);
 while(n>0)
 {  r = n%10;
        sum = sum + r;
    n = n/10;
 }
 printf("sum = %d",sum);
    return 0;
}