#include <stdio.h>

int main(){
	
    float A[10], temp;
    
    printf("Digite 10 numeros reais: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &A[i]);
    }
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(A[j] > A[j + 1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f\n", A[i]);
    }

    return 0;
    
}
