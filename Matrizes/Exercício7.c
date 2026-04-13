#include <stdio.h>

int main(){
	
    int i, j;
    int a[10][10];

    printf("Gerando matriz 10x10...\n");

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){

            if (i < j){
                a[i][j] = 2*i + 7*j - 2;
            }
            else if (i == j){
                a[i][j] = 3*i*i - 1;
            }
            else {
                a[i][j] = 4*i*i*i - 5*j*j + 1;
            }
        }
    }

    printf("Matriz gerada:\n");

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d\t", a[i][j]);
        }
        
        printf("\n");
    }

    return 0;
    
}
