#include <stdio.h>

int main(){
	
    int M[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            M[i][j] = i * j;
        }
    }

    printf("Matriz 4x4:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%3d ", M[i][j]);
        }
        
        printf("\n");
        
    }

    return 0;
    
}
