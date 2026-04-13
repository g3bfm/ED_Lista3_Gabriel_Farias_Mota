#include <stdio.h>

int main(){
  
    int A[10];
    int maior, menor;

    printf("Digite 10 valores inteiros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    maior = A[0];
    menor = A[0];

    for(int i = 1; i < 10; i++){
        if(A[i] > maior){
            maior = A[i];
        }
        if(A[i] < menor){
            menor = A[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
    
}
