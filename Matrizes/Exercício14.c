#include <stdio.h>

int main(){
    
    int cartela[5][5];
    int i, j, k, l, num, repetido;

    printf("Gerando cartela de bingo:\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            do{
                num = (i * 17 + j * 31 + k * 13 + 7) % 100;
                repetido = 0;

                for(k = 0; k < i; k++){
                    for(l = 0; l < 5; l++){
                        if(cartela[k][l] == num){
                            repetido = 1;
                        }
                    }
                }

            } while(repetido == 1);

            cartela[i][j] = num;
        }
    }

    printf("Cartela de bingo:\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;

}
