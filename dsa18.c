#include <stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    char labels[3][100]={"Rows\t:   ", "Columns :   ", "Value   :   "};
    int array[m][n],z=0,nz=0;
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value at (%d,%d): ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
     printf("\nThe matrix is:\n");
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", array[i][j]); 
        }
        printf("\n");
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j]==0){
                z++;
            }
            else{
                nz++;
            };
        }
    }

    int sparse[3][nz], k=0;
    if(nz>(m*n)/2)
        printf("\nThe matrix is not a sprax matrix\n");
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (array[i][j]!=0)
                {
                    sparse[0][k]=i;
                    sparse[1][k]=j;
                    sparse[2][k]=array[i][j];
                    k++;
                }
            }
            
        }

        printf("\nSparse matrix representation is:\n\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%s", labels[i]);
            for (int j = 0; j < nz; j++)
            {
                printf("%d ", sparse[i][j]);

            }
            printf("\n");

        }
    }

    return 0;
}