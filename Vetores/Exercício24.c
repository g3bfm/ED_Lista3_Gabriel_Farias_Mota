#include <stdio.h>

int main(){
	
    int numero[10];
    float altura[10];

    int numMaisAlto, numMaisBaixo;
    float maiorAltura, menorAltura;

    printf("Digite o numero e a altura (em metros) de 10 alunos: ");
    for(int i = 0; i < 10; i++){
        printf("Aluno %d: ", i + 1);
        printf("Numero: ");
        scanf("%d", &numero[i]);
        printf("Altura: ");
        scanf("%f", &altura[i]);
    }

    maiorAltura = altura[0];
    menorAltura = altura[0];
    numMaisAlto = numero[0];
    numMaisBaixo = numero[0];

    for(int i = 1; i < 10; i++){
        if(altura[i] > maiorAltura){
            maiorAltura = altura[i];
            numMaisAlto = numero[i];
        }
        if(altura[i] < menorAltura){
            menorAltura = altura[i];
            numMaisBaixo = numero[i];
        }
    }

    printf("\nAluno mais alto: ");
    printf("Numero: %d | Altura: %.2f m\n", numMaisAlto, maiorAltura);

    printf("\nAluno mais baixo: ");
    printf("Numero: %d | Altura: %.2f m\n", numMaisBaixo, menorAltura);

    return 0;
    
}
