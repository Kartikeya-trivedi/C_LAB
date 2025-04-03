// ncr
#include <stdio.h>
int f(int p)
{ int fact=1;
   while(p>0)
   {
    fact=fact*p;
    p--;
   }
   return fact;
}
int main()
{  int a;
    int b; 
    int r;
    printf("a ki value dalo \n");
    scanf("%d",&a);
    printf("r ki value dalo \n");
     scanf("%d",&r);
    b = f(a)/(f(a-r)*f(r));
    printf("%d",b);
    return 0;
}