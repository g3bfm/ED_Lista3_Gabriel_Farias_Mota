#include <stdio.h>

int main(){
	
    int A[10], B[10];
    int j = 0;

    printf("Digite 10 numeros inteiros (0 a 50): ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);

        if(A[i] < 0 || A[i] > 50) {
            printf("Valor invalido! Digite novamente: ");
            i--;
        }
    }

    for(int i = 0; i < 10; i++){
        if(A[i] % 2 != 0){
            B[j] = A[i];
            j++;
        }
    }

    printf("\nVetor A: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", A[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    printf("\nVetor B (impares): ");
    for(int i = 0; i < j; i++){
        printf("%d ", B[i]);
        if((i + 1) % 2 == 0){
            printf("\n");
        }
    }

    return 0;
    
}
