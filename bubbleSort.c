#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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


void printSorted(int * arr, int size);  // FUNÇÃO PRO BUBBLESORT



int main(){
    
    clock_t start, end;
    float cpu_time_used;
    
    int size = 1000;
    //printf("\nDigite a quantidade de elementos>> ");
    //scanf("%d",&size);
    int *data;
    
    data = milAleatorios();
    
    //for(int i = 0; i <size;i++){
    //    printf(">>");
    //    scanf("%d",&data[i]);
    //}
    
    start = clock();
    printSorted(data,size);
    end = clock();
    cpu_time_used = ((float) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\n o tempo necessario para função foi %f \n", cpu_time_used);
    
    
    
    return 0;
}



void printSorted(int arr[], int size){  // FUNÇÃO BUBBLESORT
    
    
    
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

