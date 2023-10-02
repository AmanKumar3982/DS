#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float x = 0.0; 
    float variance; 
    float sd; 
    float sum = 0.0; 

    printf("Number of elements to be entered : ");
    scanf("%d", &n);
    
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &arr1[i]);

        x = x+arr1[i];
    }
    
    x = x/n; 

    for (int i = 0; i < n; i++)
    {
        sum += pow(arr1[i]-x,2);
    }

    variance = sum/(n-1);
    sd = sqrt(variance); 

    printf("\nMean = %f\nVariance = %f\nStandard Deviation = %f", x, variance, sd);
    
    return 0;
}
