# include <stdio.h>
int main(){
    int array1[2][3]={{1,2,3},{4,5,6}};
    int i,j;
    for(int i=0 ; i<2 ; i++ ){
        for(int j=0 ; j<3 ; j++){
         
         printf("displaying the matrix as : %d/n " , i,j,array1[i][j]);   
        }
    }
    return 0; 
}