//chedck whether number is amstrong sum of cubes of the digits it=s wequal to the number itself
#include <stdio.h>
void sumdigit(int x)
{ 
   int d=0;
   int a =0;
   int n = x;
   while(x>0)
   {  a = x%10;
    d = d + a*a*a;
    x = x/10;
   }
   if(n==d)
   {
    printf("armstrong");
   }
   else
   {
    printf("not armstrong");
   }
    
}
int main()
{  int a;
    int b;
    printf("a ki value dalo \n");
    scanf("%d",&a);
    sumdigit(a);
    return 0;
}