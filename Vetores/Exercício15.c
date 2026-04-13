#include <stdio.h>

int main() {
    int A[20];

    printf("Digite 20 numeros inteiros: ");
    for(int i = 0; i < 20; i++){
        scanf("%d", &A[i]);
    }

    printf("\nValores sem repeticao: ");
    for(int i = 0; i < 20; i++){
        int repetido = 0;

        for(int j = 0; j < i; j++){
            if(A[i] == A[j]){
                repetido = 1;
                break;
            }
        }

        if(repetido == 0){
            printf("%d\n", A[i]);
        }
    }

    return 0;
    
}
