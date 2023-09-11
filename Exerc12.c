#include <stdio.h>
#include <stdlib.h>

void main() {
     //Crie um programa para gerenciar um sistema de
     // reservas de mesas em uma casa
    //de espetáculo. A casa possui 30 mesas de 5 lugares cada.
    // O programa deverá permitir que o usuário
//escolha o código de uma mesa (100 a 129) e forneça a 
//quantidade de lugares desejados. O programa
//deverá informar se foi possível realizar 
//a reserva e atualizar a reserva. Se não for possível, o programa
//deverá emitir uma mensagem. O programa deve terminar quando
//o usuário digitar o código 0 (zero) para
//uma mesa ou quando todos os 150 lugares estiverem ocupados.
 int mesas[30][5];
 int lugarOcupado = 0;

 printf("Bem vindo ao sistema de reservas de mesas!\n");
 printf("Qual código de mesa você deseja? 100 a 129\n");

 while (1){
    int codMesa, lugarDesejado;

    printf("Digite o código da mesa(ou 0 para sair): ");
    scanf("%d", &codMesa);

    if (codMesa == 0){
        break;
    }

    if (codMesa < 100 || codMesa > 129){
        printf("Código da mesa inválido!Tente outro.\n");
        continue;
    }

    printf("Digite a quantidade de lugares: ");
    scanf("%d", &lugarDesejado);

    if (lugarDesejado <= 0 || lugarDesejado > 5){
        printf("Quantidade inválida.Digite novamente.\n");
        continue;
    }
    int mesaI = codMesa - 100;
    int lugarDisp = 0;

    for(int i= 0; i < 5; i++){
        if(mesas[mesaI][i] == 0 && lugarDesejado > 0) {
            mesas[mesaI][i] = 1;
            lugarDesejado--;
            lugarOcupado++;
        }
    }
    printf("Reserva com sucesso!\n");
 } 
  printf("Total de lugares ocupados: %d\n", lugarOcupado);


 }


