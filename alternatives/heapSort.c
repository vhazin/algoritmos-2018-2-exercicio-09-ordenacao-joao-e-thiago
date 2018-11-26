#include <stdio.h>



void heapSort(int arr[],int n);
void heapify(int arr[],int root, int end);
void swap(int * a, int *b);

int main(void){
    int arr[] = {1,3,1,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr,n);

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void heapify(int arr[],int root, int end){
    int biggest = root,biggestChild;
    
    int l = (root*2)+1;

    biggestChild = (arr[l] > arr[l+1]) ?  l : l+1;

    if(biggestChild<end && arr[biggestChild]> arr[biggest]){
        swap(&arr[root],&arr[biggestChild]);
        heapify(arr,end,biggestChild);
    }
    
}

void heapSort(int arr[],int n){
    for(int i = (n/2)-1;i>=0;i--){
        heapify(arr, i, n);
    }

    for(int i = n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,0,i);
    }
}

void swap(int * a, int *b){
    int   tmp;
     tmp = * a;
    * a = *b ;
    * b = tmp;
}