#include <stdio.h>

int main(){
	
    int A[11];
    int i, temp;

    printf("Digite 11 valores: ");
    for(i = 0; i < 11; i++){
        scanf("%d", &A[i]);
    }

    int inicio = 6, fim = 10;
    while(inicio < fim){
        temp = A[inicio];
        A[inicio] = A[fim];
        A[fim] = temp;
        inicio++;
        fim--;
    }

    printf("\nVetor ordenado: ");
    for(i = 0; i < 11; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
