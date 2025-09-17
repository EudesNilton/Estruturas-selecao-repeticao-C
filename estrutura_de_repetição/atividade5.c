#include <stdio.h>

int main() {

    int num, num2;

    printf("Escreva um numero:\n");
    scanf("%d", &num);

    num2 = 1;

    while (num2 <= num)
    {
        printf("%d\n", num2);
        num2++;
    }

    return 0;  
}