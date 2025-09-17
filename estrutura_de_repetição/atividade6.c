#include <stdio.h>

int main() {

    int note;
    
    printf("Digite sua nota: ");
    scanf("%d", &note);
    
    if(note >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;  
}