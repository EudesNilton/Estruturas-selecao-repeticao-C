#include <stdio.h>

int main() {
    int n, i = 0;
    long fib1 = 0, fib2 = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci:\n");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Digite um número maior que zero.\n");
        return 0;
    }

    printf("Sequência de Fibonacci:\n");

    while(i < n) {
        if(i == 0) {
            printf("%lld ", fib1);
        } else if(i == 1) {
            printf("%lld ", fib2);
        } else {
            proximo = fib1 + fib2;
            printf("%lld ", proximo);
            fib1 = fib2;
            fib2 = proximo;
        }
        i++;
    }

    printf("\n");
    return 0;
}
