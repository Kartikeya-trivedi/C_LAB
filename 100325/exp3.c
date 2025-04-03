// wap to find frequency of even and odd in array 
#include <stdio.h>
int main()
{
    int e=0;
    int o=0;
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
    {   if(a1[i][j]%2==0)
        {
            e++;
        }
        else
        {o++;}
    }
 }
 printf("even = %d odd = %d",e,o);

 return 0;
}