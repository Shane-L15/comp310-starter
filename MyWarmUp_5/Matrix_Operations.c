#include <stdio.h>

void printMatrix(int matrix[][2], int rows, int columns);
void addMatrices(int matrix1[][2], int matrix2[][2], int result[][2]);
void multiplyMatrices(int matrix1[][2], int matrix2[][2], int result[][2]);

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];
    int product[2][2];

    addMatrices(matrix1, matrix2, sum);
    multiplyMatrices(matrix1, matrix2, product);

    printf("Matrix Addition: \n");
    printMatrix(sum, 2, 2);
    printf("Matrix Multiplication: \n");
    printMatrix(product, 2, 2);

    return 0;
}

void addMatrices(int a[][2], int b[][2], int result[][2]) {
    int rows = 2;
    int columns = 2;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[][2], int b[][2], int result[][2]) {
    int rowsA = 2;
    int columnsA = 2;
    int columnsB = 2;

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columnsA; k++) {
                result[i][j] += a[i][j] * b[i][j];
            }
        }
    }
}

void printMatrix(int matrix[][2], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}