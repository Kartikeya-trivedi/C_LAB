// prime
#include <stdio.h>
int main()
{  int a,n;
int c = 0;
 scanf("%d",&a);
 n = a;
    while(a>0)
    {
        if(n%a==0)
        {
            c++;
        }
        a = a - 1;
    }
    if(c>2)
       {printf("non prime");}
        else 
        {printf("prime");}

    
    return 0;
}