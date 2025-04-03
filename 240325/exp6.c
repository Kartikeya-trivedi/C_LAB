//sum of 1d array 
#include <stdio.h>
void sumarr(int arr[],int size)
{  int sum =0;
    
    for(int j=0;j<size;j++)
    {
         sum = sum + arr[j];
    }
    printf("sum of array is = %d",sum);

}
int main()
{  int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("enter a number \n");
        scanf("%d",&arr[i]);
      }    
          sumarr(arr,10);
    return 0;
}