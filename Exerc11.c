#include <stdio.h>
#include <stdlib.h>

void main() {
    //Construa um programa que leia dados para um vetor de 100 elementos
    // inteiros. Imprimir o maior e o
    //menor, sem ordenar, o percentual de números pares
    // e a média dos elementos do vetor.

    int vetor[100];
    int maior, menor;
    int numerosPares = 0;
    float media;
    float soma;
    float percentualPares;

    
    printf("Digite %d elementos do vetor:\n", 100);
    for (int i = 0; i < 100; i++) {
        scanf("%d", &vetor[i]);

        
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }

        if (vetor[i] % 2 == 0) {
            numerosPares++;
        }
        soma += vetor[i];
    }
     media = soma / 100;

     percentualPares = (numerosPares * 100) / 100;

    printf("Maior valor: %d\n",maior);
    printf("Menor valor: %d\n",menor);
    printf("Percentual de números pares: %.2f%%\n",percentualPares);
    printf("Média dos elementos: %.2f\n",media);


}