#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um número:\n");
    scanf("%d", &N);

    // soma os divisores de N (exceto ele mesmo)
    for(int i = 1; i < N; i++) {
        if(N % i == 0) {
            soma += i;
        }
    }

    if(soma == N) {
        printf("%d é um número perfeito.\n", N);
    } else {
        printf("%d não é um número perfeito.\n", N);
    }

    return 0;
}
