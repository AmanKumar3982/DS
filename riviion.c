#include <stdio.h>

int main() {
    int matrix[2][3]; // Declare a 2x3 matrix
    
    // Input elements for the matrix
    printf("Enter elements for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
