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




