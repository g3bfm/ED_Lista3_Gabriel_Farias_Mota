#include <stdio.h>

int main(){
	
    int A[10];
    
    printf("Digite 10 valores inteiros: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        if(A[i] < 0){
            A[i] = 0;
        }
    }

    printf("Vetor final: ");
    for(int i = 0; i < 10; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
