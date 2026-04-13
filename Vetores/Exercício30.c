#include <stdio.h>

int main(){
	
    int A[10], B[10], C[10];
    int tamanhoC = 0;

    printf("Digite 10 numeros para o vetor A: ");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 10 numeros para o vetor B: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(A[i] == B[j]) {

                int repetido = 0;
                for(int k = 0; k < tamanhoC; k++){
                    if(C[k] == A[i]){
                        repetido = 1;
                        break;
                    }
                }
                
                if(repetido == 0){
                    C[tamanhoC] = A[i];
                    tamanhoC++;
                }
            }
        }
    }

    printf("\nInterseccao (sem repetidos): ");
    for(int i = 0; i < tamanhoC; i++){
        printf("%d\n", C[i]);
    }

    if(tamanhoC == 0){
        printf("Nao ha elementos em comum.");
    }

    return 0;
    
}
