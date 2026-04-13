#include <stdio.h>

int main(){
	
    int m[3][3];
    int i, j;
    int soma = 0;

    printf("Digite os elementos da matriz 3x3: ");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (i > j){
                soma = soma + m[i][j];
            }
        }
    }

    printf("A soma dos elementos abaixo da diagonal principal e: %d\n", soma);

    return 0;
    
}
