#include <stdio.h>

float raiz(float x){
    float r = x;

    for(int i = 0; i < 10; i++){
        r = (r + x/r)/2;
    }

    return r;
    
}

int main(){
    float v[10];
    float soma = 0, media, somaQuadrados = 0, desvio;
    int n = 10;

    printf("Digite 10 numeros:\n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / n;
    
    for(int i = 0; i < n; i++) {
        somaQuadrados += (v[i] - media) * (v[i] - media);
    }

    desvio = raiz(somaQuadrados / (n - 1));

    printf("Media: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio);

    return 0;
    
}
