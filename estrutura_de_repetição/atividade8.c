#include <stdio.h>

int main() {

    int num1, num2;

    printf("Digite dois números:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        printf("O primeiro número é maior que o segundo.\n");
    } else if(num1 < num2) {
        printf("O segundo número é maior que o primeiro.\n");
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;  
}