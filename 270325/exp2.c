//gcd and hcf
// we used euclidean algorithms here which is based on the principle that  that gcd(a,b)=gcd(b,a%b)
// chat gpt soln
#include <stdio.h>
int hcf(int a, int b)
 {
    if (b == 0) 
        {return a;}  /*
        Step 1: If b is 0, then the GCD is a.
        This is the base case for recursion.
        */
        else  
   {return hcf(b, a % b); }  /*
   Step 2: Apply the recursive formula:
           GCD(a, b) = GCD(b, a % b)
   - We replace 'a' with 'b' and 'b' with 'a % b'.
   - This reduces the problem size in each step.
   */
}
int main()
{int n;
 int m;
 printf("enter first number \n");
 scanf(" %d",&n);
 printf("enter the second number\n");
 scanf(" %d",&m);

int b = hcf(n,m);
printf("gcd = %d",b);
return 0;
}