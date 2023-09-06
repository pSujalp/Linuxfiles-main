#include <stdio.h>

#define ROWS_A 3
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 4



int main() {
    // Define the matrices A and B
    int matrixA[ROWS_A][COLS_A] = {{1, 2},
                                   {3, 4},
                                   {5, 6}};
    int matrixB[ROWS_B][COLS_B] = {{7, 8, 9, 10},
                                   {11, 12, 13, 14}};
    // Resulting matrix C will be of size ROWS_A x COLS_B
    int matrixC[ROWS_A][COLS_B];
    
    // Perform matrix multiplication here

        // Perform matrix multiplication
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) 
        {
            int sum = 0;
            for (int k = 0; k < COLS_A; k++) 
            {
                sum += matrixA[i][k] * matrixB[k][j];
            }
            matrixC[i][j] = sum;
        }
    }
    
        // Display the result matrix C
    printf("Result matrix C:\n");
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}


