// print all number btw 1 to n divisble by 3 or 5
#include <stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {  if(i%3==0||i%5==0)
        printf("%d \n",i);
    }
     return 0;
}