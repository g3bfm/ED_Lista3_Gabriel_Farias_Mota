#include <stdio.h>

int main(){
	
    int A[10];
    int i = 0, j, repetido;
    
	printf("Digite 10 numeros diferentes: ");
    while(i < 10){
        scanf("%d", &A[i]);

        repetido = 0;
        for(j = 0; j < i; j++){
            if(A[i] == A[j]){
                repetido = 1;
                break;
            }
        }

        if(repetido){
            printf("Numero repetido! Digite outro: ");
        } else {
            i++;
        }
    }

    printf("Valores digitados: ");
    for(i = 0; i < 10; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
