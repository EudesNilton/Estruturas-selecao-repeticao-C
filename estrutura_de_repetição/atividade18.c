#include <stdio.h>

int main(){

    int num, total = 1;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        total *= i;
        
    }
    
    printf("o fatorial de %d é %d", num, total);

    return 0;
}