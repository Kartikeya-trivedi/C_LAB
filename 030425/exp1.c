//print sum of digits
#include <stdio.h>
int sumofdigit(int k) 
{ 
    if (k ==0)
{return 0;}

else
{
    
    return k%10 + sumofdigit(k/10);
}
}
int main()
{int n;
    
scanf(" %d",&n);
int b = sumofdigit(n);
printf("%d",b);
return 0;
}