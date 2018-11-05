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
    
    printf("\n o tempo gasto para função foi %f \n",cpu_time_used);


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
