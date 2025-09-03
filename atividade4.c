#include <stdio.h>

int main() {

    int num, num2;

    printf("Escreva um numero:\n");
    scanf("%d", &num);

    for
    (num2 = 1; num2 <= num; num2++) {
        printf("%d\n", num2);
    }
    
    return 0;  
}