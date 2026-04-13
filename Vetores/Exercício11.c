#include <stdio.h>

int main(){
	
    float A[10];
    int negativos = 0;
    float somaPositivos = 0;

    printf("Digite 10 numeros reais: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        if(A[i] < 0){
            negativos++;
        } else if(A[i] > 0){
            somaPositivos += A[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
    
}
