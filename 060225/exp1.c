//factoria of a number from 1 to 10
#include <stdio.h>
int main()
{ 
    for(int i=1;i<=10;i++)
    { int fact = 1;
        for(int j=1;j<=i;j++)
        {   
            fact = fact*j;
        }
        printf("%d is factorial of %d \n",fact,i);
    }
    return 0;
}