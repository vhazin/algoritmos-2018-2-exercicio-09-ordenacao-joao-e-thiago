#include <stdio.h>



void swap(int * a, int *b){
    int   tmp;
     tmp = * a;
    * a = *b ;
    * b = tmp;
}


void insertionSort(int arr[], int n){
    
    int key;
    for(int i = 1; i < n; i++)  // percorre o vetor do segundo elemento até o final
    {
        key = arr[i];
        int j = i-1; // determina o fim do vetor ordenado
        while(j >=0 && arr[j]>key){ // enquanto não chegar no inicio do array ordenado e a chave for menor que o elemento de j
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key; // atualiza a chave
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