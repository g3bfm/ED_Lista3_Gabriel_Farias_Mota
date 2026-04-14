#include <stdio.h>

int main(){
    
    char respostas[5][10];
    char gabarito[10];
    int resultado[5];
    int i, j, pontos;

    printf("Digite o gabarito (10 questoes a/b/c/d):\n");

    for(i = 0; i < 10; i++){
        scanf(" %c", &gabarito[i]);
    }

    printf("Digite as respostas dos 5 alunos (10 questoes cada):\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            scanf(" %c", &respostas[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        pontos = 0;

        for(j = 0; j < 10; j++){
            if(respostas[i][j] == gabarito[j]){
                pontos = pontos + 1;
            }
        }

        resultado[i] = pontos;
    }

    printf("Resultado dos alunos:\n");

    for(i = 0; i < 5; i++){
        printf("Aluno %d: %d\n", i + 1, resultado[i]);
    }

    return 0;

}
