//wap to find the sum of boundary elemetns 
#include <stdio.h>
int main()
 {   int sum=0;
    int a1[5][5]; 
    // Input for first matrix
    printf("Enter elements for the first 5x5 matrix:\n");
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    // printing those array before swapping
    printf("array 1 is \n");
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
             if(i==4||j==0||i==0||j==4)
            {sum= sum + a1[i][j];}
        }
    }
 printf("sum of boundary elements is %d ",sum);
    return 0;
}