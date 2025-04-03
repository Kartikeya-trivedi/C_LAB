#include <stdio.h>
int main()
{  int small;
    int large;
    int arr[10];
     for(int i=0;i<10;i++)
     {  printf("enter a number \n");
        scanf("%d",&arr[i]);
     }
     small = arr[0];
     large = arr[0];
     for(int i=1;i<10;i++)
     {  
        if(small>arr[i])
        {
            small = arr[i];
        }
     }
     for(int i=1;i<10;i++)
     {  
        if(large<arr[i])
        {
            large = arr[i];
        }
     }
     printf("smallest number is %d and the largest number is %d",small,large);
    return 0;
} 