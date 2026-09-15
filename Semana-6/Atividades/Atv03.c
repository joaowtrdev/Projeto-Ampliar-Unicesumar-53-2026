  /*
    Escreva um programa em C, que receba o salario de uma pessoa e calcule um aumento de que a pessoa desejar.
    O calculo deverá ser feito em uma sub-rotina de FUNÇÃO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float aumentarSalario(float salario, float porcentagem) {
    float aumento = (salario * porcentagem) / 100;
    float salarioNovo = salario + aumento;

    return salarioNovo;
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    float salario, porcentagem, novoSalario;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    printf("Informe quantos %% o funcionário receberá de aumento: ");
    scanf("%f", &porcentagem);

    novoSalario = aumentarSalario(salario, porcentagem);

    printf("Salário antigo: R$%.2f\nAumento de: %.0f%%\nNovo: R$%.2f", salario, porcentagem, novoSalario);

    return 0;
}