//fibonacci
#include <stdio.h>
int fibo(int k) 
{ 
    if (k ==1)
{return 0;}
else if(k==2)
{
return 1;
}
else
return fibo(k-1)+fibo(k-2);
}
int main()
{int n;
    
scanf(" %d",&n);
int b = fibo(n);
printf("%d",b);
return 0;
}
