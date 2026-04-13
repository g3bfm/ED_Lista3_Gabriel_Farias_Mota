#include <stdio.h>

int main(){
	
    int A[10], B[10], C[20];
    int i, j, k = 0;
    int repetido;

    printf("Digite 10 valores para o vetor A: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite 10 valores para o vetor B: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 10; i++){
        repetido = 0;
        for(j = 0; j < k; j++){
            if(A[i] == C[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            C[k++] = A[i];
        }
    }

    for(i = 0; i < 10; i++){
        repetido = 0;
        for(j = 0; j < k; j++){
            if(B[i] == C[j]){
                repetido = 1;
                break;
            }
        }
        if(!repetido){
            C[k++] = B[i];
        }
    }

    printf("Uniao dos vetores: ");
    for(i = 0; i < k; i++){
        printf("%d\n", C[i]);
    }

    return 0;
    
}
