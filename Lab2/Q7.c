#include <stdio.h>

void displayLowerTriangular(int matrix[][10], int n) {
    printf("\nLower Triangular Matrix:\n");
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n,i,j;
    int matrix[10][10];

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int k,l;
    printf("\nOriginal Matrix:\n");
    for (k = 0; k < n; k++) {
        for (l = 0; l < n; l++) {
            printf("%d ", matrix[k][l]);
        }
        printf("\n");
    }
    displayLowerTriangular(matrix, n);
return 0;
}
