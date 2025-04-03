// wap to find a pair in an array whose sum is a given number
#include <stdio.h>
int main()
{ 
 int n;
 printf("enter a number \n");
 scanf("%d",&n);
int arr[10];
for(int i=0;i<10;i++)
{    printf("enter a number in array \n");
    scanf("%d",&arr[i]);
}
 for(int k=0;k<10;k++)
 {
    for(int l=0;l<10;l++)
    {
      if(arr[k]+arr[l]==n && k!=l)
      {
        printf("the pair is {%d,%d} ",arr[k],arr[l]);
      }
    }
 }
    return 0;
}