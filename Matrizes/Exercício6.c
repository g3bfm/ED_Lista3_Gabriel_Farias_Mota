#include <stdio.h>

int main(){
	
    int A[4][4], B[4][4], C[4][4];

    printf("Digite os valores da matriz A (4x4): ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os valores da matriz B (4x4): ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(A[i][j] > B[i][j]){
                C[i][j] = A[i][j];
            } else {
                C[i][j] = B[i][j];
            }
        }
    }

    // Exibindo a matriz C
    printf("\nMatriz C (maiores valores): ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", C[i][j]);
        }
        
        printf("\n");
    }

    return 0;
    
}
