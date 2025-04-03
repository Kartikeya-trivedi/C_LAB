// find sum of digit of a number
#include <stdio.h>
void sumdigit(int x)
{ 
   int d=0;
   while(x>0)
   {  
    d = d + x%10;
    x = x/10;
   }
   printf("sum = %d",d);
    
}
int main()
{  int a;
    int b;
    printf("a ki value dalo \n");
    scanf("%d",&a);
    sumdigit(a);
    return 0;
}