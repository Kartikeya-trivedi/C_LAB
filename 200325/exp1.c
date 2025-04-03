// factorial
#include <stdio.h>
void fact(int x)
{ int p =1;
  while(x>0)
  { p=p*x;
    x--;
  }
  printf("factorial = %d",p);
}
int main()
{  int a;
    scanf("%d",&a);
    fact(a);
    return 0;
}