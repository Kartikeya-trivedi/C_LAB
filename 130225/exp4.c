//wap to copy elements to copy elements of one array into another array
#include <stdio.h>
int main()
{
    int a[10];
    int arr[10];
    
     for(int i=0;i<10;i++)
     {  printf("enter a number \n");
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<10;i++)
     {   a[i]=arr[i];
     }
     for(int i=0;i<10;i++)
     {   
        printf("%d \n",a[i]);
     }
     return 0;
    }
