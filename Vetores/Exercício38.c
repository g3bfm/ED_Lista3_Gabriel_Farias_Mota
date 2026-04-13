#include <stdio.h>

int main(){
	
    int A[10];
    
	printf("Digite 10 valores inteiros: ");
    for(int i = 0; i < 10; i++){
        int valor;
        scanf("%d", &valor);

        int j = i - 1;
        
        while(j >= 0 && A[j] > valor){
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = valor;
    }
    
    printf("Valores em ordem crescente: ");
    for(int i = 0; i < 10; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
