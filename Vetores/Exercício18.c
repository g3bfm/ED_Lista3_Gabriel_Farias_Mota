#include <stdio.h>

int main(){
	
    int A[10];
    int c = 0, x;

    printf("Digite 10 numeros inteiros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    printf("Digite um numero inteiro X: ");
    scanf("%d", &x);
    
    printf("Multiplos de %d no vetor: ", x);
    for(int i = 0; i < 10; i++){
        if(A[i] % x == 0){
            printf("%d\n", A[i]);
            c++;
        }
    }

    printf("Quantidade de multiplos: %d\n", c);

    return 0;
    
}
