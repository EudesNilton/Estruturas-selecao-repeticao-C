#include <stdio.h>

int main(){

    int number, divisor;

    printf("Digite um número:\n");
    scanf("%d", &number);

    for (divisor = 1; divisor <= number; divisor++)
    {
        if(number % divisor == 0){
            printf("%d é divisor de %d\n", divisor, number);
        }
    }

    return 0;
}