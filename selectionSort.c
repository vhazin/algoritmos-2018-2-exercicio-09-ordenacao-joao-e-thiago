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
    
    
    
    
    for(int i = 0 ; i<size - 1;i++){
        

        int posMenor = i;

         for(int j = i+1; j < size; j++)
        {
            if(arr[j] < arr[posMenor]){
                posMenor = j;
            }
        }
        int tmp = arr[i];

        arr[i] = arr[posMenor];
        arr[posMenor] = tmp;


        
        
    }

    
    for(int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    

   
    
}