#include <stdio.h>

int main(){
	
    int matriz[4][4];
    int i, j;

    printf("Digite os elementos da matriz 4x4 (valores de 1 a 20):\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz triangular inferior:\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){

            if (j > i){
                printf("0\t");
            } else{
                printf("%d\t", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
    
}
