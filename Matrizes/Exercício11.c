#include <stdio.h>

int main(){
    
    int a[3][3];
    int i, j;
    int soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matriz:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i + j == 2){
                soma = soma + a[i][j];
            }
        }
    }

    printf("Soma da diagonal secundaria: %d\n", soma);

    return 0;

}
