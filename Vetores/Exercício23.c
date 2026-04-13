#include <stdio.h>

int main(){
	
    float A[5], B[5];
    float produto = 0;

    printf("Digite 5 valores para o vetor A: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &A[i]);
    }

    printf("Digite 5 valores para o vetor B: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &B[i]);
    }

    for(int i = 0; i < 5; i++){
        produto += A[i] * B[i];
    }

    printf("\nVetor A: ");
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", A[i]);
    }

    printf("\nVetor B: ");
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", B[i]);
    }

    printf("\nProduto escalar: %.2f\n", produto);

    return 0;
    
} 
