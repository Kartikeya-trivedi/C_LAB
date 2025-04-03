//largest snallest
#include <stdio.h>
void largest(int arr[],int size)
{ int large;
    large = arr[0];
    
    for(int j=1;j<size;j++)
    {
        if(large<arr[j])
        {
            large = arr[j];
        }
    }
    printf("largest element in array is = %d",large);

}
void smallest(int arr[],int size)
{ int small;
    small = arr[0];
    for(int j=1;j<size;j++)
    {
        if(small>arr[j])
        {
            small = arr[j];
        }
    }
    printf("smallest element in array is = %d",small);
}

int main()
{  int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("enter a number \n");
        scanf("%d",&arr[i]);
    }
    largest(arr,10);
    smallest(arr,10);
    return 0;
}