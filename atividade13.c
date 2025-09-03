#include <stdio.h>

int main(){
    
    int number;
    int count = 1;

    printf("Digite um número:\n");
    scanf("%d", &number);
    
    while(count <= 10){
        printf("%d x %d = %d\n", number, count, number * count);
        count++;
    }


    return 0;
}