#include <stdio.h>
int main()
{ int rows;
printf("enter number of rows");
scanf("%d",&rows);
 int i =1;
 while(i<=rows)
 {
    if(i==1 || i==rows)
    {printf("***** \n");
    }
    else
    {
        printf("*   * \n");
    }
    i++;
 }
    return 0;

}