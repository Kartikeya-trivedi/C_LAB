#include <stdio.h>
int main()
{ int a=5;
 int b =6;
int c = 10;
    int m = a>b?a>c?a:c:b>c?b:c;
    printf("%d",m);
   return 0; 
}