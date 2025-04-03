//palindromde
#include <stdio.h>
void palindrome(int x)
{ 
   int d=0;
   int n =x;
   while(x>0)
   {       
    d = d*10 + x%10;
    x = x/10;
   }
   if(d==n)
   {
    printf("palindrome");
   }
   else 
   {
    printf("not palindrome");
   }
   
    
}
int main()
{  int a;
    int b;
    printf("a ki value dalo \n");
    scanf("%d",&a);
    palindrome(a);
    return 0;
}