//wap to print no of words in string
#include <stdio.h>
#include <string.h>
int main()
{    
    int b = 1;
    char x[20];
    printf("input a string \n");
    gets(x);
    int a = strlen(x);
    for(int i=0;x[i]!='\0';i++)
    {    if(x[i]==' ')
        {
         b++;
    }}
    printf("%d",b);
    
}