#include <stdio.h>
#include <stdlib.h>

void main() {
   // onstrua um programa que armazene o código, a quantidade, o valor de compra 
   //e o valor de venda de 30
   //produtos. A listagem pode ser de todos os produtos ou 
  //somente de uma o se digitar o código.

  float codigo[3];
  float quantidade[3];
  float valorCompra[3];
  float valorVenda[3];
  int opcao;
  int numProdutos = 0;

    while (1) {
        printf("\n===== Menu =====\n");
        printf("1. Adicionar Produto\n");
        printf("2. Listar Todos os Produtos\n");
        printf("3. Listar Produto por Código\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (numProdutos < 3) {
                printf("Informe o código do produto: ");
                scanf("%d", &codigo[numProdutos]);
                printf("Informe a quantidade: ");
                scanf("%d", &quantidade[numProdutos]);
                printf("Informe o valor de compra: ");
                scanf("%f", &valorCompra[numProdutos]);
                printf("Informe o valor de venda: ");
                scanf("%f", &valorVenda[numProdutos]);
                numProdutos++;
                printf("Produto adicionado com sucesso!\n");
            } else {
                printf("A capacidade máxima de produtos foi atingida.\n");
            }
        } else if (opcao == 2) {
            if (numProdutos > 0) {
                printf("\n===== Lista de Todos os Produtos =====\n");
                printf("Código | Quantidade | Valor de Compra | Valor de Venda\n");
                for (int i = 0; i < numProdutos; i++) {
                    printf("%d | %d | %.2f | %.2f\n", codigo[i], quantidade[i],
                     valorCompra[i], valorVenda[i]);
                }
            } else {
                printf("Não há produtos cadastrados.\n");
            }
        } else if (opcao == 3) {
            if (numProdutos > 0) {
                int codigoBusca;
                printf("Informe o código do produto a ser listado: ");
                scanf("%d", &codigoBusca);
                int encontrado = 0;
                printf("\n===== Produto Encontrado =====\n");
                printf("Código | Quantidade | Valor de Compra | Valor de Venda\n");
                for (int i = 0; i < numProdutos; i++) {
                    if (codigo[i] == codigoBusca) {
                        printf("%d | %d | %.2f | %.2f\n", codigo[i], quantidade[i], valorCompra[i], valorVenda[i]);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("Produto não encontrado.\n");
                }
            } else {
                printf("Não há produtos cadastrados.\n");
            }
        } else if (opcao == 4) {
            printf("Saindo do programa.\n");
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }




}