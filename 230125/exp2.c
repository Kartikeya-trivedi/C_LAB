#include <stdio.h>
int main()

{  int a;
 int bill = 0;
    scanf("%d",&a);
    if(a<=100)
    {
        bill = a*5;
    }
    else if(a>100&&a<=300)
    {
        bill = 500 + (a-100)*8;
    }
    else 
    {
        bill = 500 + 1600 + (a-300)*10;
    }
    printf("%d",bill);
    return 0;
}