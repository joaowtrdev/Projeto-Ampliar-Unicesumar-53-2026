/*
    Escreva um programa que receba o cadastro de 3 funcionários.
    Cada funcionário tem nome, idade e salário.
    Informe qual funcionário possui o maior salário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXFUNCIONARIOS 3

typedef struct {
    char nome[30];
    int idade;
    float salario;
} TipoFuncionario;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    TipoFuncionario funcionarios[MAXFUNCIONARIOS];
    int indiceMaiorSalario;

    for(int i = 0; i < MAXFUNCIONARIOS; i++) {
        printf("Informe o NOME do %d° funcionário: ", i + 1);
        fgets(funcionarios[i].nome,sizeof(funcionarios[i].nome),stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0';

        printf("Informe a IDADE do funcioário %s: ", funcionarios[i].nome);
        scanf("%d", &funcionarios[i].idade);

        printf("informe o SALÁRIO do funcionário %s: ", funcionarios[i].nome);
        scanf("%f", &funcionarios[i].salario);
        getchar();

        if(i == 0) {
            indiceMaiorSalario = i;
        } else {
            if(funcionarios[i].salario > funcionarios[indiceMaiorSalario].salario) {
                indiceMaiorSalario = i;
            }
        }
    }

    printf(
        "::: FUNCIONÁRIO COM MAIOR SALÁRIO :::\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Salário: R$%.2f\n\n", funcionarios[indiceMaiorSalario].nome, funcionarios[indiceMaiorSalario].idade, funcionarios[indiceMaiorSalario].salario
    );

    return 0;
}