#include<stdio.h>
int main(){
    int arrray2[2][3];
    printf(" input the element in matrix:\n");
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("the element [%d],[%d]: " ,i,j);
            scanf("%d",&arrray2[i][j]);

        }
    }
    printf("here the matrix is \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arrray2[i][j]);
        }
        printf("\n");
    }
    return 0;

}