#include <stdio.h>

int main() {
    
    int count = 0;
    int i = 1;

    while(i <= 50) {
        if(i % 2 != 0) {
            printf("%d é ímpar\n", i);
            count += i;
        }
        i++;
    }

    printf("O resultado final é %d\n", count);
    return 0;
}