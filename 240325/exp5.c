// number of zeros in integer
#include <stdio.h>
void zero(int x)
{ 
   int d=0;
   int a =0;
   int n = x;
   while(x>0)
   {  a = x%10;
     if(a==0)
     {
        d++;
     }
    x = x/10;
   }
   printf("number of zero = %d",d);
    
}
int main()
{  int a;
    int b;
    printf("a ki value dalo \n");
    scanf("%d",&a);
    zero(a);
    return 0;
}