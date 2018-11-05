#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// FUNÇÃO DE ORDENAÇÃO INSERTIONSORT

void printSorted(int * arr, int size);

int *milAleatorios() {
    
    static int  r[10000];
    int i;
    
    srand( (unsigned)time( NULL ) );
    
    for ( i = 0; i < 10000; ++i) {
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
    
    //for(int i = 0; i <size;i++){
    //    printf(">>");
    //    scanf("%d",&data[i]);
    //}
    start = clock();
    printSorted(data,10000);
    end = clock();
    cpu_time_used = ((float) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\n o tempo gasto pela função INSERTION foi %f \n", cpu_time_used);
    
    
    
    return 0;
}



void printSorted(int vetor[], int tamanhoVetor){
    
    
    
    int escolhido, j;
    
    for (int i = 1; i < tamanhoVetor; i++) {
        escolhido = vetor[i];
        j = i - 1;
        
        while ((j >= 0) && (vetor[j] > escolhido)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        
        vetor[j + 1] = escolhido;
    }
    
    
    
    
    
}





