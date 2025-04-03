// wap to count -ve or +ve number in array
#include <stdio.h>
int main()
{  int n=0;
    int p=0;
    int arr[10];
     for(int i=0;i<10;i++)
     {  printf("enter a number \n");
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<10;i++)
     {
        if(arr[i]>0||arr[i]==0)
        {p++;}
        else
        {n++;}
     }
     printf("number of positive numbers is %d and number of negative numbers is %d",p,n);
    return 0;
}