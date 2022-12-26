#include <stdio.h>


int arr[] = {2, 4, 2, 3, 4, 5, 1, 2, 8, 5, 7, 4, 1};
int length = (sizeof(arr) / (sizeof(int)));


int main(void){

    // print unsorted array

    for(int i = 0; i < length; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    
    
    // sort array
    for(int i = 0; i < length; i++){
    for(int i = 0; i < length; i++){
        if(arr[i] > arr[i + 1]){
            int k = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = k;
        }
    }
    }

    for(int i = 0; i < length; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}