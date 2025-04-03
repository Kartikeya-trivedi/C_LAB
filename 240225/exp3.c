// wap to to find the sum of two matrics of order 3x3 
#include <stdio.h>
int main()
{
 int a1[3][3];
 int a2[3][3];
 int sum[3][3];
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
    {   printf("enter a number for second array \n");
        scanf("%d",&a2[i][j]);
    }
 }
 for(int i =0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {   sum[i][j] = a1[i][j] + a2[i][j];
    }
 }
 for(int i =0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {   printf(" %d",sum[i][j]);
    }
    printf("\n");
 }
 return 0;
}