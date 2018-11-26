#include <stdio.h>

void swap(int * a, int *b);
void quickSort(int arr[], int start, int end);

int main(int argc, char const *argv[])
{

    int arr[] = {4,3,1,2,11,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void swap(int * a, int *b){
    int   tmp;
     tmp = * a;
    * a = *b ;
    * b = tmp;
}

void quickSort(int arr[], int start, int end){
    if((end - start) < 2) return;


    int j = -1, pivot = arr[end];
    
    
    for(int i = start; i <= end-1; i++)
    {
        if(arr[i]<=pivot){
            j++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[j+1],&arr[end]);
    int * test = arr;

    quickSort(arr, start , j);
    quickSort(arr,j+2, end);
    
   
    
    
    
}
