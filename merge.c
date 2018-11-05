//
//  main.c
//  mergesort
//
//  Created by Thiago Moraes on 05/11/18.
//  Copyright © 2018 Thiago Moraes. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

void merge (int vetor[], int ini, int mid, int fim){  // função de merge
    //int i, j, k;
    int tam1 = mid - ini + 1; // determinando os tamanhos dos dois arrays divididos
    int tam2 = fim - mid;
    
    int v1[tam1], v2[tam2]; // criando os novos arrays
    
    for (int i = 0; i < tam1; i++) { // copia o conteudo para o vetor esquerdo
        v1[i] = vetor[ini + i];
    }
    
    for (int i = 0; i < tam2; i++) { //copia o conteudo para o vetor direito
        v2[i] = vetor[mid + 1 + i];
    }
    
    int i1 = 0, i2 = 0, im =1;
    
    while (i1 < tam1 && i2 < tam2) {
        if (v1[i1] <= v2[i2]) {
            vetor[im] = v1[i1];
            i1++;
        } else{
            vetor[im] = v2[i2];
            i2++;
        }
        im++;
    }
    
    while (i1 < tam1) {
        vetor[im] = v1[i1];
        i1++;
        im++;
    }
    
    while (i2 < tam2) {
        vetor[im] = v2[i2];
        i2++;
        im++;
    }
}

void mergeSort(int vetor[], int ini, int fim){ // função do mergesort
    if (ini < fim) {
        int mid = (ini + fim) / 2;
        mergeSort(vetor, ini, mid);
        mergeSort(vetor, mid+1, fim);
        merge(vetor, ini, mid, fim);
    }
}

void imprime(int v[], int tam)  // função pra imprimir o vetor
{
    for (int i=0; i < tam; i++)
        printf("%d ", v[i]);
    printf("\n");
}


int main() {
    
    //rotina de teste
    
    int vetorex[] = {12, 11, 13, 5, 6, 7};
    int vetam = 6;
    
    printf("\n O array informado foi \n");
    imprime(vetorex, vetam);
    
    mergeSort(vetorex, 0, vetam-1);
    
    printf("\n O array ordenado é \n");
    imprime(vetorex, vetam);
    return 0;
}
