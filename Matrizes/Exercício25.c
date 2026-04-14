#include <stdio.h>

int main(){
    
    int a[3][3];
    int i, j;
    int li = -1, co = -1;

    printf("Digite o tabuleiro (3x3):\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    if(a[1][1] == 0){
        li = 1;
        co = 1;
    }
    else{
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                if(a[i][j] == 0 && li == -1){
                    li = i;
                    co = j;
                }
            }
        }
    }

    printf("Proxima jogada: linha %d coluna %d\n", li, co);

    return 0;

}
