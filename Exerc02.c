#include <stdio.h>
#include <stdlib.h>

void main(){
    //Faça um programa que armazene 10 letras 
    //em um vetor e imprima uma listagem numerada.

 char letras[10]; 
    int i;

   
    printf("Digite 10 letras:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &letras[i]); 
    }

    
    printf("Listagem numerada das letras:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. %c\n", i + 1, letras[i]);
    }


}