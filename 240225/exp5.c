#include <stdio.h>
int main() 
{
    int a1[3][3], a2[3][3], mul[3][3];

    // Input for first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    // Input for second matrix
    printf("Enter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }

    // Initialize result matrix to zero
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mul[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                mul[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }

    // Display the resultant matrix
    printf("Resultant Matrix (Multiplication of A and B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
