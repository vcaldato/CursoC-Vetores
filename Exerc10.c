#include <stdio.h>
#include <stdlib.h>

void main() {
    //10. Faça um programa que leia um vetor vet de 10 elementos
    // e obtenha um vetor w cujos componentes são
    //os fatoriais dos respectivos componentes de vet. 

    int vet[10];
    int w[10];

    printf("Digite 10 elementos do vetor vet:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        int fatorial = 1;
        for (int j = 1; j <= vet[i]; j++) {
            fatorial *= j;
        }
        w[i] = fatorial;
    }

    printf("\nVetor w contendo os fatoriais:\n");
    for (int i = 0; i < 10; i++) {
    printf("%d! = %d\n", vet[i], w[i]);
}


}