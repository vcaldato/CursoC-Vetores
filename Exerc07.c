#include <stdio.h>
#include <stdlib.h>

void main() {
//07) Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias 
//(utilize vetores). Ao
//final, o programa deverá imprimir quantas mercadorias proporcionam:
//• lucro < 10%
//• 10% <= lucro <= 20%
//• lucro > 20%

float precoCompra[100];
float precoVenda[100];
float porcentLucro[100];
int lucroMenor10 = 0;
int lucroentre10e20 = 0;
int LucroMaior20 = 0;


for(int i = 0; i < 100; i++){
    printf("Preço da compra da mercadoria: ");
    scanf("%f", &precoCompra[i]);
    scanf("%*c");

    printf("Preço da venda da mercadoria: ");
    scanf("%f", &precoVenda[i]);
    scanf("%*c");

     porcentLucro[i] = ((precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100);

     if (porcentLucro[i] < 10){
        lucroMenor10++;
     }else if (porcentLucro[i] >= 10 && porcentLucro[i] <= 20){
        lucroentre10e20++;
     }else if (porcentLucro[i] > 20){
        LucroMaior20++;
     }
}
     printf("RESUMO DOS LUCROS!\n");
     printf("Lucros menores que 10 porcento: %d\n",lucroMenor10);
     printf("Lucros entre 10 porcento e 20 porcento: %d\n",lucroentre10e20);
     printf("Lucros maiores que 20 porcento: %d\n",LucroMaior20);
     

}