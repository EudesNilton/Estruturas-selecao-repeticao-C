#include <stdio.h>

int main() {
    int i, num;
    int maior, menor;

    printf("Digite o 1º número: ");
    scanf("%d", &num);

    maior = menor = num;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}