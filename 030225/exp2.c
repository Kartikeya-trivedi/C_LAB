#include <stdio.h>
int main()
{    int n;  
    
     int c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { int sum = 0; 
      int d = i;
       while(d>0)
       {  c = d%10;
        sum = sum + c;
        d = d/10;
       }
        if(sum%2==0)
        {
            printf("%d \n",i);
        }
    }
    
    return 0;
}
