//wap to print sum of leading diagonal elements of array
#include <stdio.h>
int main()
{
 int a1[3][3];
 int sum = 0;
 for(int i =0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {   printf("enter a number for first array \n");
        scanf("%d",&a1[i][j]);
    }
 }
 for(int i =0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {   if(i==j)
        {
        sum = sum + a1[i][j];
        }
    }
 }
 printf(" sum = %d",sum);
 return 0;
}