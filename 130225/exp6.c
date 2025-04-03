//wap to merge two arrays 
#include <stdio.h>
int main()
{  int arr[] = {1,2,3,4,5};
 int a[] = {1,2,3};
 int ar[8];
 for(int i=0;i<8;i++)
 { if(i<5)
  {ar[i] = arr[i];}
  else 
  ar[i] = a[i-5];
 }
 for(int i =0;i<8;i++)
 {
    printf("%d \n",ar[i]);
 }
    return 0;
}