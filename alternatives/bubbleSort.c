#include <stdio.h>



void swap(int * a, int *b){
    int   tmp;
     tmp = * a;
    * a = *b ;
    * b = tmp;
}


void insertionSort(int arr[], int n){
    
    
    for(int i = 0; i < n-1; i++){
        
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    
    
}

int main(void){
    int arr[] = {1,3,1,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}