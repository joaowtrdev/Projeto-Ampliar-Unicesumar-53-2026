/*
    Escreva um progama em C que permita o usuário cadastrar ATÉ 10 produtos.
    Cada produto deve ter uma descrição, um preço e uma quantidade em estoque.
    O programa deve permitir ao usuário cadastrar produtos, listar todos os produtos cadastrados.
    O programa só poderá ser encerrado quando o usuário escolher a opção de sair em um menu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXPRODUTOS 10

struct TipoProduto {
    char descricao[100];
    float preco;
    int quantidadeEstoque;
};

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    struct TipoProduto produtos[MAXPRODUTOS];
    int opcao, indice = 0;

    do {
        system("clear");
        printf(
            "1 - Cadastrar Produtos\n"
            "2 - Listar Produtos Cadastrados\n"
            "3 - Sair\n"
            "Escolha: " 
        );
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
            case 1:
                if(indice == MAXPRODUTOS) {
                    printf("LIMITE MÁXIMO ATINGIDO!!\n");
                } else {
                    printf("\n::: CADASTRO DE PRODUTO :::\n");
                    printf("Informe a DESCRIÇÃO do produto: ");
                    fgets(produtos[indice].descricao, sizeof(produtos[indice].descricao), stdin);
                    produtos[indice].descricao[strcspn(produtos[indice].descricao, "\n")] = '\0';

                    printf("Informe o PREÇO do produto: ");
                    scanf("%f", &produtos[indice].preco);

                    printf("Informe a QUANTIDADE em estoque do protudo: ");
                    scanf("%d", &produtos[indice].quantidadeEstoque);
                    getchar();

                    indice++;
                }

                system("pause");
                break;

            case 2:
                if(indice == 0) {
                    printf("Nenhum produto cadastrado!!\n");
                } else {
                    printf("\n::: PRODUTOS CADASTRADOS :::\n");
                    for(int i = 0; i < indice; i++) {
                        printf(
                            "Descrição: %s\n"
                            "Preço: R$%.2f\n"
                            "Quantidade no Estoque: %d\n\n", produtos[i].descricao, produtos[i].preco, produtos[i].quantidadeEstoque
                        );
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