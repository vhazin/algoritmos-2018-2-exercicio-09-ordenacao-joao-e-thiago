#include <stdio.h>
#include <time.h>



void printSorted(int * arr, int size);

int main(){
    
    clock_t start, end;
    float cpu_time_used;
    
    int size;
    printf("\nDigite a quantidade de elementos>> ");
    scanf("%d",&size);
    int data[size];

    for(int i = 0; i <size;i++){
        printf(">>");
        scanf("%d",&data[i]);
    }
    
    start = clock();
    printSorted(data,size);
    end = clock();
    cpu_time_used = ((float) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\n o tempo necessario para função foi %f \n", cpu_time_used);
    


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
