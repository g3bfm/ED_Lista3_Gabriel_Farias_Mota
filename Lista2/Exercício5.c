#include <stdio.h>

int main(){
    int A[10];
    int contador = 0;


    printf("Digite 10 valores inteiros: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    
    for(int i = 0; i < 10; i++) {
        if(A[i] % 2 == 0) {
            contador++;
        }
    }

    
    printf("Quantidade de valores pares: %d", contador);

    return 0;
    
}
