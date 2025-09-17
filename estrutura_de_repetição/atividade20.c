#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    int count = 0;
    
    printf("Digite números (0 para parar):\n");
    
    while(1) {
        scanf("%d", &num);
        if(num == 0) {
            break; 
        }
        soma += num;  
        count++;     
    }

    if(count > 0) {
        printf("A média dos números digitados é: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}
