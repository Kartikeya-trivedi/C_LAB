// print the multiplication tABLE FROM 1 TO 5
#include <stdio.h>
int main()
{ int p;
    for(int i =1;i<=5;i++)
    {
        for(int j =1;j<=10;j++)
        {
           p =i*j;
           printf("%d \n",p);
        }
    }
    return 0;
}