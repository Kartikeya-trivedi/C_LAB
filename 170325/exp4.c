//Write a program to compare two strings with equal or non-equal without using library functions
#include <stdio.h>
int main()
{
    char a[20];
    char arr[20];
    printf("enter a string 1\n");
     gets(a);
    printf("enter string 2\n");
    gets(arr);
    int equal =1;
    for (int i = 0; a[i] != '\0' || arr[i] != '\0'; i++) {
        if (a[i] != arr[i]) {
            equal = 0; 
            break;
        }
    }
    if(equal==1)
    {
        printf("equal");

    }
    else
    {printf("not equal");}
    return 0;
    }