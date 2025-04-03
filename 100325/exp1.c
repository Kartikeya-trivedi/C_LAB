//wap to swap arrays using a third array
#include <stdio.h>
int main()
 {
    int a1[3][3], a2[3][3], a3[3][3]; 
    // Input for first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements for the second 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a2[i][j]);
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
    printf("array 2 is \n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a3[i][j]=a1[i][j];
            a1[i][j]=a2[i][j];
            a2[i][j]=a3[i][j];
        }
    }
    //swapped arrays 
    printf("array 1 is \n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a1[i][j]);
        }
        printf("\n");
    }
    printf("array 2 is \n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
