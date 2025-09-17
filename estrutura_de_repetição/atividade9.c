#include <stdio.h>

int main() {

    int num, num2, num3;
    
    printf("Digite três números:\n");
    scanf("%d %d %d", &num, &num2, &num3);

    if(num > num2 && num > num3) {
        printf("O primeiro número é o maior.\n");
    } else if(num2 > num && num2 > num3) {
        printf("O segundo número é o maior.\n");
    } else {
        printf("O terceiro número é o maior.\n");
    }

    return 0;
}