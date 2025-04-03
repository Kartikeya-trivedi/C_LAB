#include <stdio.h>
int main()
{ char a;
    scanf("%c",&a);
  if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='U'||a=='u')
    {printf("vowel");}
  else if(a=='b'||a=='B'||a=='c'||a=='C'||a=='d'||a=='D'||a=='f'||a=='F'||a=='g'||a=='G'||a=='h'||a=='H'||a=='j'||a=='J'||a=='k'||a=='K'||a=='l'||a=='L'||a=='m'||a=='M'||a=='n'||a=='N'||a=='P'||a=='p'||a=='q'||a=='Q'||a=='r'||a=='R'||a=='s'||a=='S'||a=='t'||a=='T'||a=='z'||a=='Z'||a=='v'||a=='V'||a=='w'||a=='x'||a=='X'||a=='Y'||a== 'y'||a=='W')
 {printf("consonant");}
  else
 { printf("character");}
 return 0;
}
