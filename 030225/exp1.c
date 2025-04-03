#include <stdio.h>
int main()
{   int a,b;
 int sumo = 0;
 int sume = 0;
printf("enter lower limit then upper limit");
scanf("%d %d",&a,&b);
 for(int i=a;i<=b;i++)
   {
        if(i%2==0)
        sume = sume + i;
        else 
        sumo = sumo + i;
        
   } 
 printf("sum of even numbers = %d",sume);
printf("sum of odd numbers = %d",sumo);
    return 0;
}