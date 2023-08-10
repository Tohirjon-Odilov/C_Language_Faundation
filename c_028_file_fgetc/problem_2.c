#include <stdio.h>

void printArray(int arr[][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

void replaceLowerTriangleWithZeros(int arr[][5], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > j || i + j > rows - 1) {  // Elements below the main diagonal and above the antidiagonal
                arr[i][j] = 0;
            }
        }
    }
}

int main() {
    int array[5][5] = {
        { 1,  2,  3,  4,  5},
        { 6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    printf("Original array:\n");
    printArray(array, 5, 5);
    
    replaceLowerTriangleWithZeros(array, 5, 5);
    
    printf("\nArray with lower triangle and upper antidiagonal replaced by zeros:\n");
    printArray(array, 5, 5);

    return 0;
}
