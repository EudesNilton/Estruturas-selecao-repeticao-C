
#  Lista de Exercícios – Estruturas de Seleção e Repetição em C

Atividade de fixação de Estruturas de Seleção e Repetição em C 


## Aprendizados

1 - Como receber e imprimir utilizando o printf e scanf.

```
int number;

printf("Digite um número: \n");
scanf("%d", &number)
```

2 - Como utilizar as estruturas de repetição For e While em diversos casos.

```
//numeros pares com for

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
```
```
//numeros impares com while
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
```


3- Melhora no pensamento lógico e resolução de problemas.
