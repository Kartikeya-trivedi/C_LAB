#include <stdio.h>
int main()
{ float sum;
 float avg; float a;
    for(int i=1;i<=10;i++)
    {
scanf("%f",&a);
sum = sum + a;
    }
    avg = sum/10;
    printf("sum = %f, avg = %f",sum,avg);
return 0;
}