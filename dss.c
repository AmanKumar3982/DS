#include <stdio.h>

int main(){
    int r,c;
    printf("\n enter the no of rows: ");
    scanf("%d",&r);
    printf("\n enter the no of column: ");
    scanf("%d",&c);
    printf("Matrix-1\n\n");
    int array1[r][c];
    int array2[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value : ");
            scanf("%d", &array1[i][j]);
        }
        
    }

    printf("\n\nMatrix-2\n\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter value : ");
            scanf("%d", &array2[i][j]);
        }
        
    }
    printf("\n Sum of two matrix : \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", array1[i][j]+array2[i][j]);
        }
        printf("\n");
        
    }

    return 0;
    
}