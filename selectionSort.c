#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// FUNÇÃO DE ORDENAÇÃO SELECTIONSORT

void printSorted(int * arr, int size);

int *milAleatorios() {
    
    static int  r[1000];
    int i;
    
    srand( (unsigned)time( NULL ) );
    
    for ( i = 0; i < 1000; ++i) {
        r[i] = rand();
    }
    printf("\n Vetor de mil numeros aleatorios gerados \n");
    return r;
}

int main(){
    clock_t start, end;
    float cpu_time_used;
    
    //int size;
    //printf("\nDigite a quantidade de elementos>> ");
    //scanf("%d",&size);
    int *data;
    data = milAleatorios();
    
   // for(int i = 0; i <size;i++){
   //     printf(">>");
   //     scanf("%d",&data[i]);
   // }
    
    start = clock();
    printSorted(data,1000);
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
