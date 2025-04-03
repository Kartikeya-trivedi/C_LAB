// wap to transpose
#include <stdio.h>
int main()
{
 int a1[3][3];
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
    {   printf(" %d",a1[j][i]);
    }
    printf("\n");
 }
 return 0;
}