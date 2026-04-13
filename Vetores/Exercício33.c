#include <stdio.h>

int main(){
	
    int A[15];
    int tamanho = 15;

    printf("Digite 15 numeros inteiros: ");
    for(int i = 0; i < 15; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < tamanho; i++){
        if(A[i] == 0){
            for(int j = i; j < tamanho - 1; j++){
                A[j] = A[j + 1];
            }
            tamanho--; 
            i--; 
        }
    }

    printf("\nVetor compactado (sem zeros): ");
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
