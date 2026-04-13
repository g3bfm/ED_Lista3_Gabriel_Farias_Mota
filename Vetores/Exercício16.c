#include <stdio.h>

int main(){
	
    float A[5];
    int codigo;

    printf("Digite 5 numeros reais:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%f", &A[i]);
    }

    printf("Digite o codigo (0, 1 ou 2): ");
    scanf("%d", &codigo);

    if(codigo == 0){
        return 0;
    } 
    else if(codigo == 1){
        for(int i = 0; i < 5; i++){
            printf("%.2f\n", A[i]);
        }
    } 
    else if(codigo == 2){
        for(int i = 4; i >= 0; i--){
            printf("%.2f\n", A[i]);
        }
    } 
    else{
        printf("Codigo invalido!\n");
    }

    return 0;
    
}
