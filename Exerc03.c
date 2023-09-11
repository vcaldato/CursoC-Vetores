#include <stdio.h>
#include <stdlib.h>

void main() {
     //Construa uma programa em C que armazene 15 números 
     //em um vetor e imprima uma listagem numerada
//contendo o número e uma das mensagens: par ou ímpar.


int num[15];
int i;

 printf("Digite 15 números inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &num[i]);
}
printf("Listagem numerada das letras:\n");
    for (i = 0; i < 15; i++) {
        printf("%d. %c\n", i + 1, num[i]);
        if (num[i] % 2 == 0) {
            printf("par\n");
        } else {
            printf("ímpar\n");
        }
}
}