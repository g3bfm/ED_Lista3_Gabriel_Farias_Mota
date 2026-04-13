#include <stdio.h>

int main(){
	
    float A[5];
    float maior, menor, soma = 0, media;

    printf("Digite 5 valores: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &A[i]);
        soma += A[i];
    }

    maior = A[0];
    menor = A[0];
    
    for(int i = 1; i < 5; i++){
        if(A[i] > maior){
            maior = A[i];
        }
        if(A[i] < menor){
            menor = A[i];
        }
    }

    media = soma / 5;

    printf("\nValores lidos: ");
    for(int i = 0; i < 5; i++){
        printf("%.2f\n", A[i]);
    }

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
    
}
