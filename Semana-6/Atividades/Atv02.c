  /*
    Escreva um programa em C, que receba o salario de uma pessoa e calcule um aumento de 10%.
    O calculo deverá ser feito em uma sub-rotina de PROCEDIMENTO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aumentarSalario(float salario) {
    float aumento = salario * 0.10;
    float novoSalario = salario + aumento;
    printf("Salário antigo: R$%.2f\nAumento: R$%.2f\nNovo: R$%.2f", salario, aumento, novoSalario);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    float salario;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    aumentarSalario(salario);

    return 0;
}