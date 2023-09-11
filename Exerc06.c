#include <stdio.h>
#include <stdlib.h>

void main() {
    //. Construa um programa que permita armazenar o salário
    // de 20 pessoas. Calcular e armazenar o novo
//salário sabendo-se que o reajuste foi de 8%. 
//Imprimir uma listagem numerada com o salário e o novo
//salário. Declare quantos vetores forem necessários.

float salario[20];
float novoSalario[20];

for(int i = 0; i < 20;i++){
    printf("Digite o salário: \n");
    scanf("%f",&salario[i]);
    scanf("%*c");

       

    novoSalario[i] = salario[i] * 1.08;

}
printf("LISTAGEM DO SÁLARIO\n");

for (int i = 0; i < 20; i++){
printf("Listagem: %d\n", i + 1);
printf("Antigo salário: %f\n",salario[i]);
printf("Novo salário: %f\n",novoSalario[i]);

}
}