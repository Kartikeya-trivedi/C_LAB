//Write a program to compare two strings with equal or non-equal without using library functions
#include <stdio.h>
void compare(char x[],char y[])
{
    
    int equal =1;
    for (int i = 0; x[i] != '\0' || y[i] != '\0'; i++) {
        if (x[i] != y[i]) {
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
}
int main()
{
    char a[20];
    char arr[20];
    printf("enter a string 1\n");
     gets(a);
    printf("enter string 2\n");
    gets(arr);
   compare(a,arr);
   return 0;
    }