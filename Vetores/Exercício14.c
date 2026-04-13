#include <stdio.h>

int main(){
	
    int A[10];
    int encontrou = 0;
    
    printf("Digite 10 valores inteiros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    printf("Valores repetidos: ");
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(A[i] == A[j]) {
                printf("%d\n", A[i]);
                encontrou = 1;
                break; 
            }
        }
    }

    if(!encontrou){
        printf("Nao ha valores repetidos.");
    }

    return 0;
     
}
