#include <stdio.h>

int main(){
    
    int a[20][20];
    int i, j;
    long long produto;
    long long maior = 0;

    printf("Digite os elementos da matriz 20x20:\n");

    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){

            if(j <= 16){
                produto = a[i][j] * a[i][j+1] * a[i][j+2] * a[i][j+3];
                if(produto > maior){
                    maior = produto;
                }
            }

            if(i <= 16){
                produto = a[i][j] * a[i+1][j] * a[i+2][j] * a[i+3][j];
                if(produto > maior){
                    maior = produto;
                }
            }

            if(i <= 16 && j <= 16){
                produto = a[i][j] * a[i+1][j+1] * a[i+2][j+2] * a[i+3][j+3];
                if(produto > maior){
                    maior = produto;
                }
            }

            if(i <= 16 && j >= 3){
                produto = a[i][j] * a[i+1][j-1] * a[i+2][j-2] * a[i+3][j-3];
                if(produto > maior){
                    maior = produto;
                }
            }
        }
    }

    printf("Maior produto de 4 adjacentes: %lld\n", maior);

    return 0;

}
