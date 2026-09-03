/*
    Escreva um algoritmo que peça o salário do funcionário e depois fique perguntando quantos % de aumente quer dar funcionário até que chegue em R$10.000,00
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salario, aumento;
    int porcentagem;

    printf("Informe o salario do funcionario: ");
        scanf("%f", &salario);

    do {

        printf("Quantos %% de aumento dara para o funcionario: ");
        scanf("%d", &porcentagem);

        aumento = salario * (porcentagem / 100.0);

        salario = salario + aumento;

        printf("Aumento: R$%.2f\nSalario atualizado: R%.2f\n\n",aumento, salario);
        system("pause");
        system("cls");
    } while (salario < 10000);
        
    printf("finalizou com salario sinistro de R$%.2f\n", salario);

    return 0;
}