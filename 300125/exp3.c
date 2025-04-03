// print factors of a number
#include <stdio.h>
int main()
{ int i=1;
    int c =0;
    int a;
    scanf("%d",&a);
    while(i<=a)
    {
     if(a%i==0)
     printf("%d \n",i);
     i = i+1;
    }
    return 0;
}