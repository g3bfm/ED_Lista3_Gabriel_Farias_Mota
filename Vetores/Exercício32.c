#include <stdio.h>

int main(){
	
    int x[5], y[5];
    
 	printf("Digite 5 valores para o vetor X:\n");
    	for(int i = 0; i < 5; i++) scanf("%d", &x[i]);
    printf("Digite 5 valores para o vetor Y:\n");
    	for(int i = 0; i < 5; i++) scanf("%d", &y[i]);

    printf("\nSoma: ");
    	for(int i = 0; i < 5; i++) printf("%d ", x[i] + y[i]);

    printf("\nProduto: ");
    	for(int i = 0; i < 5; i++) printf("%d ", x[i] * y[i]);

    printf("\nDiferenca (x - y): ");
    	for(int i = 0; i < 5; i++){
        	int ok = 1;
        for(int j = 0; j < 5; j++)
            if(x[i] == y[j]) ok = 0;
        	if(ok) printf("%d ", x[i]);
    }

    printf("\nIntersecao:\n");
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(x[i] == y[j]) printf("%d ", x[i]);

    printf("\nUniao: ");
    for(int i = 0; i < 5; i++) printf("%d ", x[i]);

    for(int i = 0; i < 5; i++){
        int ok = 1;
        for(int j = 0; j < 5; j++)
            if(y[i] == x[j]) ok = 0;
        if(ok) printf("%d ", y[i]);
    }

    return 0;
    
}
