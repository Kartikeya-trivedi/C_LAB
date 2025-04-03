#include <stdio.h>
int main()
{
    int time,principle,rate,SI;
    time = 5;
    principle = 10000;
    rate = 10;
    SI = principle*rate/100*time;
    printf("SIMPLE INTEREST = %d",SI);
    return 0;
}