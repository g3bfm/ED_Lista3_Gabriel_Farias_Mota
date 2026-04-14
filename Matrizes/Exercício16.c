#include <stdio.h>

int main(){
    
    int gabarito[10];
    int respostas[3][10];
    int matricula[3];
    int i, j;
    int nota[3];
    int aprovados = 0;
    float percentual;

    printf("Digite o gabarito (10 questoes):\n");

    for(i = 0; i < 10; i++){
        scanf(" %c", &gabarito[i]);
    }

    for(i = 0; i < 3; i++){
        printf("Digite a matricula do aluno:\n");
        scanf("%d", &matricula[i]);

        printf("Digite as respostas do aluno:\n");

        for(j = 0; j < 10; j++){
            scanf(" %c", &respostas[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        nota[i] = 0;

        for(j = 0; j < 10; j++){
            if(respostas[i][j] == gabarito[j]){
                nota[i] = nota[i] + 1;
            }
        }

        if(nota[i] >= 7){
            aprovados++;
        }
    }

    printf("\nResultado dos alunos:\n");

    for(i = 0; i < 3; i++){
        printf("Matricula: %d\n", matricula[i]);

        printf("Respostas: ");

        for(j = 0; j < 10; j++){
            printf("%c ", respostas[i][j]);
        }

        printf("\nNota: %d\n\n", nota[i]);
    }

    percentual = (aprovados * 100.0) / 3;

    printf("Percentual de aprovacao: %.2f%%\n", percentual);

    return 0;

}
