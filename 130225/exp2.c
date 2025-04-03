// array no of even and odd numbers
#include <stdio.h>
int main()
{  int e=0;
    int o=0;
    int arr[10];
     for(int i=0;i<10;i++)
     {  printf("enter a number \n");
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<10;i++)
     {
        if(arr[i]%2==0)
        {e++;}
        else
        {o++;}
     }
     printf("number of odd numbers is %d and number of even numbers is %d",o,e);
    return 0;
}