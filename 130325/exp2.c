// wap to print the sum of the largest row
#include <stdio.h>
int main()
 {   
     int summax=0;
    int a1[3][3]; 
    // Input for first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    // printing those array before swapping
    printf("array 1 is \n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++) {
        int sum =0;
        for (int j = 0; j < 3; j++) {
             sum = sum + a1[i][j];
        }
        if(sum>summax)
        {
            summax=sum;
        }
    }
 printf("max sum is %d ",summax);
    return 0;
} 