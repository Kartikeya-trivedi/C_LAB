//wap to calculate the lenght of given strings
#include <stdio.h>
#include <string.h>
int main()
{
    int len =0;
    char x[20];
    printf("input a string \n");
    gets(x);
    for(int i=0;x[i]!='\0';i++)
    {
        len = len  + 1;
    }
    printf("length %d",len-1);
}