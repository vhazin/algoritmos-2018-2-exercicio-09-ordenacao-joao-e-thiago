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
    
    printf("\n o tempo gasto pela função foi %f \n", cpu_time_used);
    


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

   
    printf("Ordenado: ");
    for(int i = 0; i < tamanhoVetor; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("\n");

   
    
}




