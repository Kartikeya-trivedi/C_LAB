//prime
#include <stdio.h>
void isprime(int x)
{ int p =0;
    int i = 1;
  while(i<=x)
  { 
    if(x%i==0)
    {
        p++;
    }
    i++;
  }
  if(p>2)
  {printf("is not prime");}
   else
   {printf("is prime");}

}
int main()
{  int a;
    scanf("%d",&a);
    isprime(a);
    return 0;
}