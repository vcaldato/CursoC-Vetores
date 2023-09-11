#include <stdio.h>
#include <stdlib.h>

void main() {
//Faça um programa que armazene 8 números em um    
//vetor e imprima todos os números. Ao final, imprima
 //o total de números múltiplos de seis.
 int num[8], i;
 int totalMultiploDeSeis;

 printf("Digite 8 numeros inteiros: ");
 for(i = 0; i < 8; i++){
    scanf("%d", &num[i]);
 }
  printf("Números digitados:\n");
    for (i = 0; i < 8; i++) {
        printf("%d\n",num[i]);
    
 if(num[i] % 6 == 0){
    totalMultiploDeSeis++;
        
 }
    }
    printf("Total de números múltiplos de seis: %d\n", totalMultiploDeSeis);

}