#include <stdio.h>

int main(){
	
    int M[5][5];
    int X;
    int encontrou = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &X);

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(M[i][j] == X){
                printf("Encontrado na posicao [%d][%d]\n", i, j);
                encontrou = 1;
            }
        }
    }

    if(!encontrou){
        printf("Nao encontrado\n");
        
    }

    return 0;
    
}
