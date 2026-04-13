#include <stdio.h>

int main(){
	
    int A[100];
    int num = 1, i = 0;

    while(i < 100){
        if(num % 7 != 0 && num % 10 != 7){
            A[i] = num;
            i++;
        }
        
        num++;
    }

    for(i = 0; i < 100; i++){
        printf("%d\n", A[i]);
    }

    return 0;
    
}
