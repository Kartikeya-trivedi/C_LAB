// factorial
#include <stdio.h>
int main()
{ int n = 5; 
 int p = 1;
     while(n>=1)
     {
        p = p*n;
        n = n - 1;
     }
 printf("%d",p);
    return 0;
}