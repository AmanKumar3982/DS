#include <stdio.h>
int main(){
    int array1[2][3];
    int i,j;
    printf("first matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("the elements [%d],[%d]:",i,j);
            scanf("%d",&array1);
        }
    }
    printf("second matrix:\n");
    int array2[2][3];
    int k,l;
    for(k=0;k<2;k++){
        for(l=0;l<3;l++){
            printf("the elements [%d];[%d]:",k,l);
            scanf("%d",&array2);

        }
    }
    int array3[2][3];
    int m,n;
    for (m=0;m<2;m++){
        for(n=0;n<3;n++){
            array3[m][n]=array2[k][l]+array1[i][j];
        
        }
    }
    printf("the addition two matrix: \n");
    for(k=0;k<2;k++){
        for(l=0;l<3;l++){
            printf("%d\t",array3[k][l]);
        }
        printf("\n");
    }
    return 0;
}    