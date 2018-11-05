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
    
    printf("\n o tempo necessario para rodar a função foi %f \n", cpu_time_used);


    return 0;
}

void troca(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

  void heapify(int arr[], int n, int i) 
{ 
    int maior = i; 

    int e = (2*i) + 1; 
    int d = (2*i) + 2; 
  
    
    if (e < n && arr[e] > arr[maior]) 
        maior = e; 
  
    
    if (d < n && arr[d] > arr[maior]) 
        maior = d; 
  
    
    if (maior != i) { 
        troca(&arr[i], &arr[maior]); 
        heapify(arr, n, maior); 
    } 
} 



void printSorted(int arr[], int size){
    
    
    for (int i = (size / 2 )- 1; i >= 0; i--) {
        heapify(arr, size, i); 
    }
        
  

    for (int i=size-1; i>=0; i--) { 
        
        troca(&arr[0], &arr[i]); 
  
        
        heapify(arr, i, 0); 
    } 
    
    for(int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    

   
    
}
