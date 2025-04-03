// find the sum of cubes of first n natural numbers 
#include <stdio.h>
int main()
{ int n = 1;
int a;
int sum =0;
 scanf("%d",&a);
 while(n<=a)
 {
sum = sum + n*n*n;
n = n+1;
 }
 printf("sum = %d",sum);
    return 0;
}