#include <stdio.h>

int main(){

    int number;

    printf("Digite um número:\n");
    scanf("%d", &number);

    if(number % 3 == 0 && number % 5 == 0){
        printf("%d é divisível por 3 e por 5\n", number);
    } else {
        printf("%d não é divisível por 3 e por 5\n", number);
    }
    
    return 0;
}