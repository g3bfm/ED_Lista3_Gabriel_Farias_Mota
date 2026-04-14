#include <stdio.h>

int main(){
    
    float a[2][2], b[2][2], c[3][3];
    int i, j;
    int opcao;
    float constante;

    printf("Digite os elementos da matriz A (2x2):\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%f", &a[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (2x2):\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%f", &b[i][j]);
        }
    }

    printf("Menu:\n");
    printf("a) Somar as matrizes\n");
    printf("b) Subtrair B de A\n");
    printf("c) Adicionar constante\n");
    printf("d) Imprimir matrizes\n");

    scanf(" %c", (char*)&opcao);

    if(opcao == 'a'){
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("Resultado da soma:\n");

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("%.2f ", c[i][j]);
            }
            printf("\n");
        }
    }

    if(opcao == 'b'){
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        printf("Resultado da subtracao:\n");

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("%.2f ", c[i][j]);
            }
            printf("\n");
        }
    }

    if(opcao == 'c'){
        printf("Digite a constante:\n");
        scanf("%f", &constante);

        printf("Matriz A com constante:\n");
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                a[i][j] = a[i][j] + constante;
                printf("%.2f ", a[i][j]);
            }
            printf("\n");
        }

        printf("Matriz B com constante:\n");
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                b[i][j] = b[i][j] + constante;
                printf("%.2f ", b[i][j]);
            }
            printf("\n");
        }
    }

    if(opcao == 'd'){
        printf("Matriz A:\n");
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("%.2f ", a[i][j]);
            }
            printf("\n");
        }

        printf("Matriz B:\n");
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("%.2f ", b[i][j]);
            }
            printf("\n");
        }
    }

    return 0;

}
