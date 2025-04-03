//factorial
#include <stdio.h>
int fact(int k) 
{
    if (k ==0 || k==1)
return 1;
else
return fact (k-1)*k;
}
int main()
{int n;
    
scanf(" %d",&n);
int b = fact(n);
printf("%d",b);
return 0;
}
