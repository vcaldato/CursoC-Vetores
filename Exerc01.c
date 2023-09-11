#include <stdio.h>
#include <stdlib.h>

void main (){
    //Faça um programa em C que armazene 15 números
    // inteiros em um vetor e depois permita que o usuário
//digite um número inteiro para ser buscado no vetor, 
//se for encontrado o programa deve imprimir a posição
//desse número no vetor, caso contrário, deve imprimir a mensagem: "Não encontrado!".

int num[15];
int i, numBuscado;

 printf("Digite 15 números inteiros:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &num[i]);

         printf("Digite um número inteiro para buscar: ");
    scanf("%d", &numBuscado);
     int encontrado = 0;

      for (i = 0; i < 15; i++) {
        if (num[i] == numBuscado) {
            encontrado = 1;
            printf("O número %d foi encontrado na posição %d do vetor.\n", numBuscado, i);
            break; 
        }
    }
    if (!encontrado) {
        printf("Não encontrado!\n");
    }

}
}

