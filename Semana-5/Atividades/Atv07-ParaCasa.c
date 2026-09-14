/*
    Escreva um programa que permita:
    1. Cadastrar Produtos
    2. Vender Produtos
    3. Sair
    Cada produto possui:
    - Código
    - Nome
    - Preço
    - Quantidade

    - O programa só pode ser encerrado quando o usuário escolher a opção 3.
    - Ao vender um produto, o usuário deverá informar a quantidade que será vendida e o programa deverá validar se essa
    quantidade existe em estoque e calcular o preço a ser pago.
    - O programa deve permitir o cadastro de ATÉ 5 produtos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

#define MAXPRODUTOS 5

typedef struct {
    int codigo;
    char nome[30];
    float preco;
    int quantidade;
} TipoProduto;

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    TipoProduto produtos[MAXPRODUTOS];
    int opcao, indice = 0, codigoInformado, quantidadeDesejada;
    float totalVenda;
    bool produtoEncotrado;

    do {
        system("clear");
        printf(
        "1 - Cadastrar Produtos\n"
        "2 - Vender Produtos\n"
        "3 - Sair\n"
        "Escolha: "
        );

        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
        case 1:
            if(indice == MAXPRODUTOS) {
            printf("LIMITE MÁXIMO ANTIGIDO!!\n");
            } else {
            printf("Informe o CÓDIGO do produto: ");
            scanf("%d", &produtos[indice].codigo);
            getchar();

            printf("Informe o NOME do produto: ");
            fgets(produtos[indice].nome, sizeof(produtos[indice].nome), stdin);
            produtos[indice].nome[strcspn(produtos[indice].nome, "\n")] = '\0';

            printf("Informe o PREÇO do produto: ");
            scanf("%f", &produtos[indice].preco);

            printf("Informe a QUANTIDADE do produto: ");
            scanf("%d", &produtos[indice].quantidade);
            
            indice++;
            }

            system("pause");
        break;

        case 2:
            if(indice == 0) {
            printf("Nenhum produto cadastrado!!\n");
            } else {
            printf("Informe o CÓDIGO do produto: ");
            scanf("%d", &codigoInformado);

            produtoEncotrado = false;

            for(int i = 0; i < indice; i++) {
                if(produtos[i].codigo == codigoInformado) {
                produtoEncotrado = true;
                printf(
                    "::: Produto encontrado :::\n"
                    "Código: %d\n"
                    "Nome: %s\n"
                    "Preço: R$%.2f\n"
                    "Quantidade: %d\n",
                    produtos[i].codigo,
                    produtos[i].nome,
                    produtos[i].preco,
                    produtos[i].quantidade
                );

                printf("Informe a QUANTIDADE que deseja vender: ");
                scanf("%d", &quantidadeDesejada);

                if(quantidadeDesejada > produtos[i].quantidade) {
                    printf("Quantidade insuficiente em estoque!!\n");
                } else {
                    produtos[i].quantidade -= quantidadeDesejada; // produtos[i].quantidade = produtos[i].quantidade  - quantidadeDesejada

                    totalVenda = quantidadeDesejada * produtos[i].preco;

                    printf("Venda realizada com sucesso!! Valor total da venda: R$%.2f\n", totalVenda);
                }
                }
            }

            if(!produtoEncotrado) {
                printf("Produto não encontrado!!\n");
            }

            }
            system("pause");
        break;

        case 3:
            printf("Muito obrigado por utilizar o nosso sistema :)\nEncerrando...");
        break;

        default:
            printf("Opção inválida!! Tente novamente...\n");
            system("pause");
        break;
        }
    } while(opcao != 3);

    return 0;
}