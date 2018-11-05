#include <stdio.h>



void printSorted(int * arr, int size);

int main(){

    int size;
    printf("\nDigite a quantidade de elementos>> ");
    scanf("%d",&size);
    int data[size];

    for(int i = 0; i <size;i++){
        printf(">>");
        scanf("%d",&data[i]);
    }

    printSorted(data,size);


    return 0;
}

  

void printSorted(int arr[], int size){
    
    
   
   for(int i = size; i >0 ; i--)
   {
       
       for(int j = 0; j < i-1; j++)
       {
           if(arr[j] > arr[j+1]){
               int tmp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = tmp;
           }
       }
       
   }
   
    printf("Ordenado: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

   
    
}