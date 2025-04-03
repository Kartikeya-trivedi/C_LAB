//palindrome string 
#include <stdio.h>
#include <string.h>
int main()
{    
   
    char x[20];
    printf("input a string \n");
    gets(x);
    int ispal = 1;
    int l =strlen(x)-1;
    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]!=x[l])
        {
           ispal =0;
           break;
        }
        l--;
    }
    if(ispal)
    {
        printf("is palindrome");
    }
    else 
    {
        printf("not palindrome");
    }
return 0;
}


   
