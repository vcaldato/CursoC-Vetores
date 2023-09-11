#include <stdio.h>
#include <stdlib.h>

void main() {
    //Faça um programa em C que leia dois conjuntos de números inteiros,
    // tendo cada um 10 elementos. Ao
    //final o programa deve listar os elementos comuns aos conjuntos
    int conjunto1[10];
    int conjunto2[10];

   
    printf("Elementos do primeiro conjunto:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &conjunto1[i]);
    }

    
    printf("\nElementos do segundo conjunto:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &conjunto2[i]);
    }

    
    printf("\nElementos comuns aos conjuntos:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (conjunto1[i] == conjunto2[j]) {
                printf("%d ", conjunto1[i]);
                break; 
            }
        }
    }

    printf("\n");

}