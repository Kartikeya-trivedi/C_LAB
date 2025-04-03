#include <stdio.h>
int main()
{ int arr[10];
    int large;
    int small;
    for(int i=0;i<10;i++)
    {
        printf("enter a number \n");
        scanf("%d",&arr[i]);
    }
    large = arr[0];
    small = arr[0];
    for(int j=1;j<10;j++)
    {
        if(small>arr[j])
        {
            small = arr[j];
        }
    }
    for(int j=1;j<10;j++)
    {
        if(large<arr[j])
        {
            large = arr[j];
        }
    }
    int diff = large - small;
    printf("difference between largest and smallest number is %d \n",diff);
    return 0;
}