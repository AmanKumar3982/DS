#include <stdio.h>

int main(){
    int a;
    int n;

    printf("Enter number of elements:");
    scanf("%d", &n);

    int array[n]; 

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements : ");
        scanf("%d", &array[i]); 
    }
    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            a = array[j+1];

            if(array[j]>array[j+1]){
                array[j+1]=array[j];
                array[j]=a;
            }
        }
        
    }*/
    

    if(n%2==0){
        printf("Median : %d", (array[(n/2)-1]+array[(n/2)])/2);
    }
    else{
        printf("Median : %d", array[n/2]);
    }
    
    return 0;
}