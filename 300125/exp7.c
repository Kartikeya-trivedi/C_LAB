#include <stdio.h>
int main()
{ int i=1;
    int c =0;
    int a;
    int sum =0;
    scanf("%d",&a);
    while(i<=a)
    {
     if(a%i==0)
     sum = sum + i;
     i = i+1;
    }
    int sum1 = sum - a; 
    if (sum1 == a)
       { printf("perfect");}
        else
       { printf("not perfect");}
    
      return 0;
}