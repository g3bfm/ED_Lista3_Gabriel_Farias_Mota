#include <stdio.h>

int main(){
	
    float notas[15];
    float soma = 0, media;

    printf("Digite as notas de 15 alunos: ");
    for(int i = 0; i < 15; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 15;

    printf("Media geral da turma: %.2f\n", media);

    return 0;
    
}
