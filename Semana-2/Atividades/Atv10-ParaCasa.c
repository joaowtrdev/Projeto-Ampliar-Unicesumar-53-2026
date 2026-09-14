/*
    Escreva um algoritmo em C que receba o salário de um funcionário e o cargo de seu código.
    De acordo com seu código, informe quanto de aumento ele teve e o valor atual de seu salário.
    A tabela a seguir apresenta os cargos e seus respectivos aumentos:

    Códigos        |         Cargo           |      Aumento
    1                   Desenvolvedor Java           30%
    2                   Analista de Redes            25%
    3                   Arquiteto DevOps             50%
    4                   Técnico de Suporte           13%

    A saída deverá ser:
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

    Desafio (opcional):
    Que tal se arriscar um pouco mais em um conceito que não trabalhamos ainda? Como entrada, receba também o nome do funcionário e escrevê-lo na saída?

    Se for se aventurar, a saída deverá ser assim:

    Nome do Funcionário: xxxxxxxxxxx
    Salário atual: R$xxxxx,xx
    Aumento de x%: R$xxx,xx
    Novo salário:  R$xxxxx,xx

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    char nome[30];
    float salario, aumento, novoSalario;
    int codigo;

    printf("Informe seu Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Informe seu Salário: ");
    scanf("%f", &salario);

    printf(
        "1. Desenvolvedor Java\n"
        "2. Analista de Redes\n"
        "3. Arquiteto DevOps\n"
        "4. Técnico de Suporte\n"
        "Informe o código do seu cargo: ");
        scanf("%d", &codigo);

    switch (codigo) {
        
        case 1:
            aumento = salario * 0.30;
            novoSalario = salario + aumento;
        
            printf("\nNome do Funcionário: %s\n", nome);
            printf("Salário atual: R$%.2f\n", salario);
            printf("Aumento de 30%%: R$%.2f\n", aumento);
            printf("Novo salário:  R$%.2f", novoSalario);
            
            break;
        case 2:
             aumento = salario * 0.25;
            novoSalario = salario + aumento;
            
            printf("\nNome do Funcionário: %s\n", nome);
            printf("Salário atual: R$%.2f\n", salario);
            printf("Aumento de 25%%: R$%.2f\n", aumento);
            printf("Novo salário:  R$%.2f", novoSalario);
            
            break;
        case 3:
            aumento = salario * 0.50;
            novoSalario = salario + aumento;
        
            printf("\nNome do Funcionário: %s\n", nome);
            printf("Salário atual: R$%.2f\n", salario);
            printf("Aumento de 50%%: R$%.2f\n", aumento);
            printf("Novo salário:  R$%.2f", novoSalario);

            break;
        case 4:
            aumento = salario * 0.13;
            novoSalario = salario + aumento;

            printf("\nNome do Funcionário: %s\n", nome);
            printf("Salário atual: R$%.2f\n", salario);
            printf("Aumento de 13%%: R$%.2f\n", aumento);
            printf("Novo salário:  R$%.2f", novoSalario);
            
            break;
        case 5:
            printf("Opção inválida!! Tente novamente...");
            
            break;
    
        default:
            break;
    }
        return 0;
}