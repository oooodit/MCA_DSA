#include <stdio.h>

void main() {
    int n;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], Sum[n][n], Multiplication[n][n];

    printf("\nEnter elements for the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements for the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            Multiplication[i][j] = 0;
            for (int k = 0; k < n; k++) {
                Multiplication[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResult of Addition:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    printf("\nResult of Multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Multiplication[i][j]);
        }
        printf("\n");
    }
}
