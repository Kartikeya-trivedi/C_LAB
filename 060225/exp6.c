//
#include <stdio.h>
int main()
{ int num;
int a =0; int b =1;
int sum;
printf("enter a number \n");
    scanf("%d",&num);
    printf("%d %d ",a,b);
    for(int i =0 ;i<=num;i++)
    {
        sum = a+b;
        a = b;
        b = sum;
        printf("%d ",sum);
    }
    return 0;
}