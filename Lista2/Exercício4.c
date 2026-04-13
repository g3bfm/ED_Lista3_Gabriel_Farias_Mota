#include <stdio.h>

int main(){
    int A[8];
    int X, Y, soma;

    printf("Digite 8 valores inteiros:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &A[i]);
    }
  
    printf("Digite duas posicoes do vetor (0 a 7):\n");
    scanf("%d %d", &X, &Y);

    soma = A[X] + A[Y];

    printf("Soma dos valores nas posicoes %d e %d = %d\n", X, Y, soma);

    return 0;
  
}
