// find common elements in two arrays
#include <stdio.h>
int main()
{ 
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int arr[]={2,4,6,8,10,0,12,14,16,18};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==arr[j])
            {
                printf("%d \n",arr[j]);
            }
        }
    }
    return 0;
}