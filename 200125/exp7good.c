#include <stdio.h>
int main()
{ char a;
    scanf("%c",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='U'||a=='u')
    {printf("VOWEL");}
    else if((a >='A' && a<='Z')||(a>='a' && a<='z'))
    {
printf("consonant");
    }
    else{
        printf("character");
    }
    return 0;
}