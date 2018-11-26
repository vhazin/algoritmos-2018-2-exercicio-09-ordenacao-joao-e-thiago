#include <stdio.h>





void mergeSort(int arr[], int l);
void merge(int parent[],int L[],int R[],int l);

int main(void){
    int arr[] = {1,3,1,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,n);

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void mergeSort(int arr[], int l){
    if(l>1){
        int middle = l/2;
        int leftSide[middle],rightSide[l-middle];

        for(int i = 0; i<middle;i++){
            leftSide[i] = arr[i];
            printf("E: %d,",arr[i]);
        }
        printf("\n\n");
        for(int i = middle; i < l; i++){
            rightSide[i-middle] = arr[i];
            printf("D: %d,",arr[i]);
        }

        printf("\n");
        mergeSort(leftSide,middle);
        mergeSort(rightSide,l-middle);
        merge(arr,leftSide,rightSide,l);
    }
    
}

void merge(int parent[],int L[],int R[],int l){
    int L_LENGTH,R_LENGTH;
    L_LENGTH = l/2;
    R_LENGTH = l-L_LENGTH;

    int i, j,k = i = j = 0;
    

    while(i < L_LENGTH && j <R_LENGTH){
        
        if(L[i] < R[j]){
            parent[k] = L[i];
            i++;
        }else{
            parent[k] = R[j];
            j++;
        }
        
        k++;
    }

    
}