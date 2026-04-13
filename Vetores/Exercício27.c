#include <stdio.h>

int ehPrimo(int n){
    if(n <= 1) return 0;

    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
	
    int A[10];

    printf("Digite 10 numeros inteiros: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("\nNumeros primos e suas posicoes: ");
    for(int i = 0; i < 10; i++){
        if(ehPrimo(A[i])){
            printf("Valor: %d | Posicao: %d\n", A[i], i);
        }
    }

    return 0;
    
}
