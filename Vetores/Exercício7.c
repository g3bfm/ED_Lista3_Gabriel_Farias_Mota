#include <stdio.h>

int main(){
	
    int A[10];
    int maior, posicao;

    printf("Digite 10 numeros inteiros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    maior = A[0];
    posicao = 0;

    for(int i = 1; i < 10; i++){
        if(A[i] > maior){
            maior = A[i];
            posicao = i;
        }
    }

    printf("\nVetor: ");
    for(int i = 0; i < 10; i++){
        printf("A[%d] = %d\n", i, A[i]);
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Posicao do maior valor: %d\n", posicao);

    return 0;
    
}
