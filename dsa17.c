//Q2.c Transpose



#include <stdio.h>


 void transposematrix(int row,int column,int array[row][column],int transpose[column][row]) {
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            transpose[i][j] = array[j][i];
        }
    }
}
 void display(int row,int column,int array[row][column]){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);

    int array[row][column];
    int transpose[column][row];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Enter element at index (%d,%d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Original Matrix:\n");
    display(row,column,array);
    printf("Transposed Matrix:\n");
    transposematrix(row,column,array,transpose);
    display(column,row,transpose);
    return 0;
}