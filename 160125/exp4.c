#include <stdio.h>
int main()
{   
     int m;
    scanf("%d",&m);
    int km;
    km = m/1000;
    int meter = m%1000;
    printf("kilometer= %d,meter =%d",km,meter);
    return 0;
} 