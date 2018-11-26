#include <stdio.h>



void swap(int * a, int *b){
    int   tmp;
     tmp = * a;
    * a = *b ;
    * b = tmp;
}


void insertionSort(int arr[], int n){
    
    int key;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i-1;
        while(j >=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
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