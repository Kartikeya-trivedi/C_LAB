//swap
#include <stdio.h>
void swap(int x,int y)
{ 
   int temp;
   temp = x;
   x =y;
    y = temp;
    printf("value of a = %d,value of b =%d after swapping \n",x,y);
}
int main()
{  int a;
    int b;
    printf("a ki value dalo \n");
    scanf("%d",&a);
    printf("b ki value dalo\n");
    scanf("%d",&b);
    printf("value of a = %d,value of b =%d \n",a,b);
    swap(a,b);
    return 0;
}