//wap to print first character of each word 
#include <stdio.h>
#include <string.h>
int main()
{
    int len =0;
    char x[20];
    printf("input a string \n");
    gets(x);
    printf("%c",x[0]);
    for(int i=0;x[i]!='\0';i++)
    {    if(x[i]==' ')
        {
         printf("%c",x[i+1]);
    }}
    
}