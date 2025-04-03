//WAP to input any two integers, and provide a menu to the user to select any of the options as
//add, subtract, multiply, divide and display the result accordingly
#include <stdio.h>
int main()
{ int a,b,c,o;
    printf("enter two numbers");
scanf("%d %d",&a,&b);
    printf(" ENTER 1 FOR ADDITION\n ENTER 2 FOR SUBTRACTION\n ENTER 3 FOR MULTIPLICATION\n ENTER 4 FOR DIVISION");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        o= a+b;
        printf("SUM = %d",o);
        break;
        case 2:
        o= a-b;
        printf("DIFFERENCE = %d",o);
        break;
        case 3:
        o= a*b;
        printf("MULTIPLICATION = %d",o);
        break;
        case 4:
        o= a/b;
        printf("DIVISION = %d",o);
        break;
        default:
        printf("Invalid output");
    

    }
    return 0;
}