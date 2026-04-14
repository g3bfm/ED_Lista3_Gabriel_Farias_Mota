#include <stdio.h>

int main(){
    
    int a[5][4];
    int i, j;
    int maior = -1;
    int matricula_maior;
    int soma = 0;
    float media;

    printf("Digite matricula, media provas e media trabalhos de 5 alunos:\n");

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }

        a[i][3] = a[i][1] + a[i][2];
    }

    for(i = 0; i < 5; i++){
        soma = soma + a[i][3];

        if(a[i][3] > maior){
            maior = a[i][3];
            matricula_maior = a[i][0];
        }
    }

    media = soma / 5.0;

    printf("Matricula com maior nota final: %d\n", matricula_maior);
    printf("Media das notas finais: %.2f\n", media);

    return 0;

}
