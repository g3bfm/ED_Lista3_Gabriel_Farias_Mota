#include <stdio.h>

int main(){
    
    float a[10][3];
    int i, j;
    int pior1 = 0, pior2 = 0, pior3 = 0;
    int pior;
    float menor;

    printf("Digite as notas dos 10 alunos (3 provas):\n");

    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &a[i][j]);
        }
    }

    for(i = 0; i < 10; i++){
        menor = a[i][0];
        pior = 1;

        for(j = 1; j < 3; j++){
            if(a[i][j] < menor){
                menor = a[i][j];
                pior = j + 1;
            }
        }

        if(pior == 1){
            pior1++;
        }
        else if(pior == 2){
            pior2++;
        }
        else{
            pior3++;
        }
    }

    printf("Alunos com pior nota na prova 1: %d\n", pior1);
    printf("Alunos com pior nota na prova 2: %d\n", pior2);
    printf("Alunos com pior nota na prova 3: %d\n", pior3);

    return 0;

}
