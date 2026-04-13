#include <stdio.h>

int main(){
	
    int A[6];
    int i = 0;

    printf("Digite 6 valores inteiros PARES: ");
    while(i < 6) {
        scanf("%d", &A[i]);

        if(A[i] % 2 == 0) {
            i++; 
        } else {
            printf("Valor invalido! Digite apenas numeros pares.");
        }
    }

    printf("Valores na ordem inversa: ");
    for(int j = 5; j >= 0; j--){
        printf("%d\n", A[j]);
    }

    return 0;
    
}
