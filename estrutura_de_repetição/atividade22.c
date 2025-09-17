#include <stdio.h>

int main() {
    int N, num;
    int pares = 0, impares = 0;

    printf("Digite a quantidade de números:\n");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("Digite o número %d:\n", i + 1);
        scanf("%d", &num);

        if(num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
