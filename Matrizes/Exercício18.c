#include <stdio.h>

int main(){
    
    int a[3][3];
    int soma[3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(j = 0; j < 3; j++){
        soma[j] = 0;
        for(i = 0; i < 3; i++){
            soma[j] = soma[j] + a[i][j];
        }
    }

    printf("Vetor soma das colunas:\n");

    for(j = 0; j < 3; j++){
        printf("%d ", soma[j]);
    }

    printf("\n");

    return 0;

}
