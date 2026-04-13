#include <stdio.h>

int main(){
	
    int matriz[3][3];
    int i, j, soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        soma = soma + matriz[i][i];
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
    
}
