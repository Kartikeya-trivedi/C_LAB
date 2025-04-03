// search an element in array 
#include <stdio.h>
int main()
{  int small;
    int num;
    int c=0;
    printf("enter the number to be searched");
    scanf("%d",&num);
    int arr[10];
     for(int i=0;i<10;i++)
     {  printf("enter a number \n");
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<10;i++)
     {   if(arr[i]==num)
        {c++;}
     }
     if(c>0)
     {printf("number found");}
     else
     {printf("number not found");}
    return 0;
}