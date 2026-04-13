#include <stdio.h>

int main(){
	
    int M[4][4];
    int contador = 0;

    printf("Digite os elementos da matriz 4x4: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &M[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(M[i][j] > 10){
                contador++;
            }
        }
    }

    printf("Quantidade de valores maiores que 10: %d\n", contador);

    return 0;
    
}
