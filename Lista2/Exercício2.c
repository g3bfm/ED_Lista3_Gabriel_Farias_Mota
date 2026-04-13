#include <stdio.h>

int main(){
    
	int A[6];

    printf("Digite 6 valores inteiros: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &A[i]);
    }

    printf("Valores lidos: ");
    for(int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
