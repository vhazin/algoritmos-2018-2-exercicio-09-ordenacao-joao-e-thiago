#include <stdio.h>



void swap(int * a, int *b){
    int   tmp;
     tmp = * a;
    * a = *b ;
    * b = tmp;
}


void selectionSort(int arr[], int n){
    int index_do_maior;
    
    for (int i = 0; i <n-1;i++){
        index_do_maior = i;
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[index_do_maior]){
                index_do_maior = j;
            }
        }    
        swap(&arr[index_do_maior], &arr[i]);
    }
}

int main(void){
    int arr[] = {1,3,1,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}