#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    
    int matrix1[m][n], matrix2[p][q], result[m][q];

    printf("Enter elements for Matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;  
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }


    printf("Result of Matrix Multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
