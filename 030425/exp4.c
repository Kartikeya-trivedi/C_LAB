//swap a number using pointers
#include <stdio.h>
int main()
{
    int a = 10;
    int b= 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
     printf("value of a = %d value of b = %d \n",*ptr1,*ptr2);
    int temp;
   
     temp = *ptr1;
     *ptr1 = *ptr2;
      *ptr2 = temp;

      printf("value of a = %d value of b = %d \n",*ptr1,*ptr2);



    return 0;
}