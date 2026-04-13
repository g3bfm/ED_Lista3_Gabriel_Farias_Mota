#include <stdio.h>

int main(){
	
    int a, b;
    int va[5] = {0}, vb[5] = {0}, soma[6] = {0};

    printf("Digite dois numeros (menores que 10000): ");
    scanf("%d %d", &a, &b);

    for(int i = 0; i < 5; i++){
        va[i] = a % 10;
        vb[i] = b % 10;
        a /= 10;
        b /= 10;
    }

    int vai_um = 0;
    for(int i = 0; i < 5; i++){
        soma[i] = va[i] + vb[i] + vai_um;

        if(soma[i] >= 10) {
            soma[i] -= 10;
            vai_um = 1;
        } else {
            vai_um = 0;
        }
    }

    soma[5] = vai_um;

    printf("Resultado da soma: ");
    int i = 5;
    while(i > 0 && soma[i] == 0) i--; 

    for(; i >= 0; i--) {
        printf("%d", soma[i]);
    }

    printf("\n");

    return 0;
    
}
