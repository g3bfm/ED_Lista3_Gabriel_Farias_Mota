#include <stdio.h>

int main(){
	
    int n, somaPares = 0, qtdImpares = 0;

    printf("Digite 6 numeros inteiros: ");

    printf("\nPares: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("%d\n", n);
            somaPares += n;
            
            qtdImpares++;
        }
    }

    printf("\nSoma dos pares: %d ", somaPares);

    printf("\nDigite novamente os 6 numeros: ");

    printf("\nImpares: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &n);

        if(n % 2 != 0){
            printf("%d", n);
        }
    }

    printf("\nQuantidade de impares: %d ", qtdImpares);

    return 0;
    
}
