//
//  main.c
//  quitcksort
//
//  Created by Thiago Moraes on 18/11/18.
//  Copyright © 2018 Thiago Moraes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int *milAleatorios() {
    
    static int  r[10000];
    int i;
    
    srand( (unsigned)time( NULL ) );
    
    for ( i = 0; i < 10000; ++i) {
        r[i] = rand();
    }
    printf("\n Vetor de 10mil numeros aleatorios gerados \n");
    return r;
}

void imprime(int *v, int tam)  // função pra imprimir o vetor
{
    for (int i=0; i < tam; i++)
        printf("%d ", v[i]);
}


void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int particiona (int vet[], int esq, int dir){
    int i = esq-1;
    int piv = vet[dir];
    
    for(int j = esq; j<=dir-1; j++){
        if(vet[j] <= piv){
            i++;
            troca(&vet[i], &vet[j]);
        }
    }
    troca(&vet[i+1], &vet[dir]);
    return (i+1);
}

void quicksort (int vet[], int esq, int dir){
    int split;
    if(esq<dir){
        split = particiona(vet, esq, dir);
        quicksort(vet, esq, split-1);
        quicksort(vet, split+1, dir);
    }
    return;
}


int main() {
    // insert code here...
    clock_t start, end;
    float cpu_time_used;
    int *data;
    data = milAleatorios();
    int size = 10000;
    
    //printf("\n \n O vetor desorgazinado:   \n \n");
    //imprime(data, 100);
    
    start = clock();
    quicksort(data, 0, 9999);
    end = clock();
    cpu_time_used = ((float) (end - start)) / CLOCKS_PER_SEC;
    
    //printf("\n \n O vetor orgazinado:   \n \n");
    //imprime(data, 100);
    
    printf("\n o tempo necessario para função QUICKSORT FOI:  %f \n", cpu_time_used);
    
    return 0;
}
