#include <stdio.h>

int main(){
	
    int v[10], v1[10], v2[10];
    int i, j = 0, k = 0;

    printf("Digite 10 numeros inteiros: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            v2[k] = v[i]; 
            k++;
        } else{
            v1[j] = v[i]; 
            j++;
        }
    }


    printf("Valores impares (v1): ");
    for(i = 0; i < j; i++) {
        printf("%d\n", v1[i]);
    }

    printf("Valores pares (v2): ");
    for(i = 0; i < k; i++){
        printf("%d\n", v2[i]);
    }

    return 0;
    
}
