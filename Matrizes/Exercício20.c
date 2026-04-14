#include <stdio.h>

int main(){
    
    float a[3][6];
    int i, j;
    float soma = 0;
    float media = 0;
    float total = 0;

    printf("Digite os elementos da matriz 3x6:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            scanf("%f", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            if(j % 2 == 0){
                soma = soma + a[i][j];
            }
        }
    }

    printf("Soma das colunas impares: %.2f\n", soma);

    for(i = 0; i < 3; i++){
        total = total + a[i][1] + a[i][3];
    }

    media = total / 6;

    printf("Media das colunas 2 e 4: %.2f\n", media);

    for(i = 0; i < 3; i++){
        a[i][5] = a[i][0] + a[i][1];
    }

    printf("Matriz modificada:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
