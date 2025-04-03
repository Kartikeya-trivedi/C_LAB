//sum
#include <stdio.h>
void sum(int x,int y)
{  int sum = x+y;
  printf("sum = %d",sum);
}
int main()
{  int a;
    int b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}