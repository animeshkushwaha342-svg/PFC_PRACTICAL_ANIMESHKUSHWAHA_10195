#include <stdio.h>

int main(){
    //animesh kushwaha_10195
    int rows,cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements of the array:\n");
    for(int i=0; i<rows;i++) {
        for(int j=0; j<cols;j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // 1. Find max and min
    int max = arr[0][0];
    int min = arr[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d\n", min);
    if(rows == cols) {
        int diag_sum = 0;
        for(int i=0; i<rows;i++){
            diag_sum += arr[i][i];
        }
        printf("Sum of diagonal elements: %d\n", diag_sum);
    } else {
        printf("Diagonal sum is applicable only for square matrices.\n");
    }
    for(int i = 0;i<rows;i++) {
        int row_sum = 0;
        for(int j=0;j<cols; j++) {
            row_sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, row_sum);
    }
    return 0;
}
//output
//Maximum element: 39976584
//Minimum element: 0
//Diagonal sum is applicable only for square matrices.
//Sum of row 1: 7650915
//Sum of row 2: 84222341
//Sum of row 3: 8414756

