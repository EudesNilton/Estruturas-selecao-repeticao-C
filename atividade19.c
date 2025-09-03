#include <stdio.h>

int main(){

    int num, i = 1, total = 1;
    
    printf("Digite um numero:\n");
    scanf("%d", &num);

    while(i <= num){
        total *= i;
        i++;
    }

    printf("O resultado total é %d", total);
    return 0;
}