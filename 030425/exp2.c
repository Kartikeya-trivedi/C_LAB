//reverse a number
// problem with this approach is that it is okay with one function call but with many function calls you have to reset the global variable d=0; before calling it 
#include <stdio.h>
int d=0;
int reverse(int k) 
{ 
    if (k ==0)
{return d;}

else
{  d = d*10 + k%10;
    return reverse(k/10);
}
}
int main()
{int n;
    
scanf(" %d",&n);
int b = reverse(n);
printf("%d",b);
return 0;
}