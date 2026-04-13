#include <stdio.h>

int main() {
    
    float A[10], B[10];
    
    printf("Digite 10 numeros reais: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &A[i]);
    }
    
    for(int i = 0; i < 10; i++){
        B[i] = A[i] * A[i];
    }
    
    printf("\nVetor original: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f\n", A[i]);
    }

    printf("\nVetor quadrado: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f\n", B[i]);
    }

    return 0;
    
}
