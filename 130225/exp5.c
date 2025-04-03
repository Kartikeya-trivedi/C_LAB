//wap to count the the total numbers of duplicae elements in a array 
#include <stdio.h>
int main()
{ int c=0;
   int b; 
    int arr[10];
     for(int i=0;i<10;i++)
     {  printf("enter a number \n");
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<10;i++)
     {   for(int j=i+1;j<10;j++)
        {
         if(arr[i]==arr[j])
         {
            c++;
         }
        }
     } 
     printf("number of duplicates = %d",c);
     return 0;
}