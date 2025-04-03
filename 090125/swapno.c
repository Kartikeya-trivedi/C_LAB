#include <stdio.h>
int main()
{
int a=70;
int b=50;
int temp;
 temp=a;
 a=b;
 b=temp;
    printf("After swapping: a=%d, b=%d",a,b);
    return 0;
}