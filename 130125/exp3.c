#include <stdio.h>
int main()
{
    int a,d1,d2,d3,d4,sum;
    printf("enter a three digit number \n");
    scanf("%d",&a);
    d1 = a/100;
    d2 = a%10;
    d3 = a/10;
    d4 = d3%10;
    sum = d1+d2+d4;
    printf("sum= %d",sum);
    return 0;
}