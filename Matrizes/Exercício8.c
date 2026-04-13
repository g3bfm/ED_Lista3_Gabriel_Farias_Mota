#include <stdio.h>

int main(){
	
    int a[3][3];
    int i, j;
    int soma = 0;
	
	printf("Digite valores para a matriz 3x3: ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
	printf("Calculo dos elementos acima da diagonal principal: ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (i < j){
                soma = soma + a[i][j];
            }
        }
    }

    printf("%d\n", soma);

    return 0;
    
}
