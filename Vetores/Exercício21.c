#include <stdio.h>

int main(){
	
    int A[10], B[10], C[10];

    printf("Digite 10 valores para o vetor A: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

   
    printf("Digite 10 valores para o vetor B: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            C[i] = A[i]; 
        } else{
            C[i] = B[i];
        }
    }

    printf("Vetor C: ");
    for(int i = 0; i < 10; i++){
        printf("%d\n", C[i]);
    }

    return 0;
    
}
