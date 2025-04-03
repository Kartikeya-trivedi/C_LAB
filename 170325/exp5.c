//Write a program to reverse the content of a string without using library functions
#include <stdio.h>
int main()
{
    char a[20];
    char arr[20];
    printf("enter a string\n");
     gets(a);
    printf("\n");
    int l=0;
    for(int i=0;a[i]!='\0';i++)
    {
     l++;
    } 

    for(int i=0;a[i]!='\0';i++)
    {
       arr[i]=a[l-i-1];
    }
    arr[l]='\0';
     printf("%s\n",arr);
     return 0;
    }