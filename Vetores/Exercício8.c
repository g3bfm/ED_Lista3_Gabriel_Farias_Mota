#include <stdio.h>

int main(){
	
    int A[6];

    printf("Digite 6 valores inteiros: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &A[i]);
    }

    printf("Valores na ordem inversa: ");
    for(int i = 5; i >= 0; i--){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
