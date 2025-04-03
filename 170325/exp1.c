//wap to count number of consonants and vowels in a string
#include <stdio.h>
#include <string.h>
 int main()
 { int v=0;
    int c=0;
  char x[100];
   
    printf("input a string \n");
    gets(x);
    for(int i=0;x[i]!='\0';i++)
    {if(x[i]=='a'||x[i]=='A'||x[i]=='e'||x[i]=='E'||x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'||x[i]=='U'||x[i]=='u')
    {v++;}
    else if((x[i] >='A' && x[i]<='Z')||(x[i]>='a' && x[i]<='z'))
    {
     c++;
    }
}
    printf("number of vowel = %d and number of consonant = %d",v,c);
    return 0;
 } 