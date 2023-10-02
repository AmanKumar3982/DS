#include <stdio.h>
int main(){
    int temp[]={25,28,27,30,31,29,26};
    float avg;
    int high = temp[0];
    int low = temp[0];
    for (int i = 0; i < sizeof(temp)/sizeof(int); i++)
    {
        avg+=temp[i]; 
        if(high<temp[i]){   
            high=temp[i];
        }
        if(low>temp[i]){
        low=temp[i]; 
    }
    }
    printf("\nA. Average Temperature : %f\nB. Hottest : %d\t\tColdest : %d\nC.Temperature Difference : %d\n", avg/(sizeof(temp)/sizeof(int)), high, low,high-low);
    return 0;
}
