#include <stdio.h>
#include <stdlib.h>

void main(){
     //Construa um programa que realize as reservas de
     // passagens áreas de uma companhia. O programa
//deve permitir cadastrar o número de 10 voos e definir
// a quantidade de lugares disponíveis para cada um.
//Após o cadastro, leia vários pedidos de reserva,
// constituídos do número da carteira de identidade do cliente
//e do número do vôo desejado. Para cada cliente,
// verificar se há possibilidade no voo desejado. Em caso
//afirmativo, imprimir o número da identidade do 
//cliente e o número do voo, atualizando o número de lugares
//disponíveis. Caso contrário, avisar ao cliente
// a inexistência de lugares. A leitura do número 0 (zero) para o
//voo desejado indica o término da leitura de reservas.
int voos[10];
int idCliente, numVoo;

for (int i = 0; i < 10; i++) {
        printf("Digite a quantidade de lugares disponíveis para o voo %d: ", i + 1);
        scanf("%d", &voos[i]);
    }
    printf("\nCadastro de voos concluído!\n");
    
    while (1) {
        
        printf("\nDigite o número da carteira de identidade do cliente (ou 0 para sair): ");
        scanf("%d", &idCliente);

        if (idCliente == 0) {
            break;
        }
         printf("Digite o número do voo desejado (de 1 a 10): ");
        scanf("%d", &numVoo);

        if (numVoo < 1 || numVoo > 10) {
            printf("Número de voo inválido. Tente novamente.\n");
            continue;
        }

        if(voos[numVoo - 1] > 0){
             printf("Reserva realizada com sucesso!\n");
            printf("Número da identidade do cliente: %d\n", idCliente);
            printf("Número do voo: %d\n", numVoo);
            voos[numVoo - 1]--;
        }else {
            printf("Desculpe, não há lugares disponíveis neste voo.\n");
        }
    }
     printf("\nFim do programa.\n");


}