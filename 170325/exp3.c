//wap to copy one string into another
#include <stdio.h>
int main()
{
    char a[20];
    char arr[20];
    printf("enter a string\n");
     gets(a);
    printf("\n");
     for(int i=0;a[i]!='\0';i++)
     {   arr[i]=a[i];
     }
     printf("%s\n", arr);
     return 0;
    }