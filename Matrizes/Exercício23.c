#include <stdio.h>

int main(){
    
    int a[3][3], b[3][3];
    int i, j, k;

    printf("Digite os elementos da matriz 3x3:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            b[i][j] = 0;

            for(k = 0; k < 3; k++){
                b[i][j] = b[i][j] + a[i][k] * a[k][j];
            }
        }
    }

    printf("Matriz B = A^2:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;

}
