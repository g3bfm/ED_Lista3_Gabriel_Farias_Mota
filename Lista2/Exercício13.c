#include <stdio.h>

int main(){
	
    float A[5];
    float maior, menor;
    int posMaior = 0, posMenor = 0;

    printf("Digite 5 valores: ");
    for(int i = 0; i < 5; i++){
        scanf("%f", &A[i]);
    }

    maior = A[0];
    menor = A[0];

    for(int i = 1; i < 5; i++){
        if(A[i] > maior){
            maior = A[i];
            posMaior = i;
        }
        if(A[i] < menor){
            menor = A[i];
            posMenor = i;
        }
	 }
	 
    printf("Maior valor: %.2f na posicao %d\n", maior, posMaior);
    printf("Menor valor: %.2f na posicao %d\n", menor, posMenor);

    return 0;
    
}
