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

#define MAX_CADASTRO 5

typedef struct {
    char nome[30];
    int codigo;
    int quantidade;
    float preco;
} TipoProduto;

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");

    TipoProduto produtos[MAX_CADASTRO];

    int totalProdutos = 0, opcao = 0;
    int codigoInformado, codigoRepetido, produtoEncontrado, quantidadeVenda;
    float valorTotal;

    while (opcao != 3) {

        system("cls");

        printf(
            "1. Cadastrar Produtos\n"
            "2. Vender Produtos\n"
            "3. Sair\n"
            "Escolha uma opção: "
        );

        scanf("%d", &opcao);
        getchar();

        system("cls");

        switch (opcao) {

            case 1:

                if (totalProdutos < MAX_CADASTRO) {

                    printf("Informe o código do produto: ");
                    scanf("%d", &produtos[totalProdutos].codigo);
                    getchar();

                    codigoRepetido = 0;

                    for (int i = 0; i < totalProdutos; i++) {

                        if (produtos[i].codigo == produtos[totalProdutos].codigo) {
                            codigoRepetido = 1;
                        }
                    }

                    if (codigoRepetido == 1) {

                        printf("Esse código já está sendo utilizado. Tente novamente...\n");

                    } else {

                        printf("Informe o nome do produto: ");
                        fgets(produtos[totalProdutos].nome, sizeof(produtos[totalProdutos].nome), stdin);
                        produtos[totalProdutos].nome[strcspn(produtos[totalProdutos].nome, "\n")] = '\0';

                        printf("Informe o preço do produto: ");
                        scanf("%f", &produtos[totalProdutos].preco);

                        printf("Informe a quantidade do produto: ");
                        scanf("%d", &produtos[totalProdutos].quantidade);

                        totalProdutos++;

                        printf("\nProduto cadastrado com sucesso!\n");
                    }

                } else {

                    printf("Limite de produtos atingido.\n");
                }

                system("pause");
                break;

            case 2:

                if (totalProdutos == 0) {

                    printf("Nenhum produto cadastrado. Tente novamente...\n");

                } else {

                    printf("Informe o código do produto: ");
                    scanf("%d", &codigoInformado);

                    produtoEncontrado = -1;

                    for (int i = 0; i < totalProdutos; i++) {

                        if (produtos[i].codigo == codigoInformado) {
                            produtoEncontrado = i;
                        }
                    }

                    if (produtoEncontrado == -1) {

                        printf("Produto não encontrado. Tente novamente...\n");

                    } else {

                        printf(
                            "\nProduto: %s\n"
                            "Preço: R$ %.2f\n"
                            "Quantidade em estoque: %d\n",
                            produtos[produtoEncontrado].nome,
                            produtos[produtoEncontrado].preco,
                            produtos[produtoEncontrado].quantidade
                        );

                        printf("\nInforme a quantidade que deseja vender: ");
                        scanf("%d", &quantidadeVenda);

                        if (quantidadeVenda > produtos[produtoEncontrado].quantidade) {

                            printf("Quantidade insuficiente em estoque. Tente novamente...\n");

                        } else {

                            valorTotal = quantidadeVenda * produtos[produtoEncontrado].preco;

                            produtos[produtoEncontrado].quantidade =
                                produtos[produtoEncontrado].quantidade - quantidadeVenda;

                            printf(
                                "\nVenda realizada com sucesso!\n"
                                "Valor a pagar: R$ %.2f\n"
                                "Quantidade restante: %d\n",
                                valorTotal,
                                produtos[produtoEncontrado].quantidade
                            );
                        }
                    }
                }

                system("pause");
                break;

            case 3:

                printf("Programa encerrado.\n");
                break;

            default:

                printf("Opção inválida! Tente novamente...\n");
                system("pause");
                break;
        }
    }

    return 0;
}