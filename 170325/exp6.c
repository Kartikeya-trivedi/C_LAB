// Write a program to replace all the   occurrences of a character in a given string with a new character
#include <stdio.h>
int main()
{
    char a[20];
    printf("enter a string\n");
     gets(a);
     char ch;
     char cb;
     printf("enter a character you want to replace\n");
     scanf(" %c",&ch);
     printf("enter a character you want to replace with\n");
     scanf(" %c",&cb);
     for(int i=0;a[i]!='\0';i++)
     {   if(a[i]==ch)
        {
            a[i]=cb;
     }

     printf("%s\n",a);
     return 0;
    }
}