#include <stdio.h>

int main() {
    
    int count = 0;

    for(int i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d é par\n", i);
            count += i;
        }
    }

    printf("O resultado final é %d\n", count);
    return 0;
}