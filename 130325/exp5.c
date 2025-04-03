//wap to print last character of string
#include <stdio.h>
#include <string.h>
int main()
{    
   
    char x[20];
    printf("input a string \n");
    gets(x);
    int a = strlen(x);
    for(int i=0;x[i]!='\0';i++)
    {    if(x[i]==' ')
        {
         printf("%c",x[i-1]);
    }}
    printf("%c",x[a-1]);
    
}