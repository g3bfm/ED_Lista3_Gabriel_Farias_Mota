#include <stdio.h>

int main(){
	
    int M[4][4];
    int maior, linha = 0, coluna = 0;

    printf("Digite os elementos da matriz 4x4: ");
    	for(int i = 0; i < 4; i++){
        	for(int j = 0; j < 4; j++){
            	scanf("%d", &M[i][j]);
        }
    }

    maior = M[0][0];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(M[i][j] > maior){
                maior = M[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMatriz:\n");
    	for(int i = 0; i < 4; i++){
        	for(int j = 0; j < 4; j++){
            	printf("%d ", M[i][j]);
        }
        
        printf("\n");
        
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Localizacao: linha %d, coluna %d\n", linha, coluna);

    return 0;
    
}
