/*
    Escreva um programa que receba o salário de uma pessoa e calcule o imposto de renda dela baseado na tabela abaixo:
    - Até 2259,20, IRPF 0%
    - De R$ 2.259,21 até R$ 2.826,65, IRPF 7,5%
    - De R$ 2.826,66 até R$ 3.751,05, IRPF 15,0%
    - De R$ 3.751,06 até R$ 4.664,68, IRPF 22,5%
    - Acima de R$ 4.664,68, IRPF 27,5%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    float salario, imposto;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    if(salario <= 2259.20){
        printf("Sortudo, você não tem nenhum imposto para pagar.");
    } else if (salario >= 2259.21 && salario <= 2826.65) {
        imposto = salario * 0.075;
        printf("Você tem %.2f de imposto para pagar", imposto);
    } else if (salario >= 2826.66 && salario <= 3751.05) {
        imposto = salario * 0.15;
        printf("Você tem %.2f de imposto para pagar", imposto);
    } else if (salario >= 3751.06 && salario <= 4664.68) {
        imposto = salario * 0.225;
        printf("Começou fazer o L, você tem %.2f de imposto para pagar", imposto);
    } else {
        imposto = salario * 0.275;
        printf("Faça o L, você tem %.2f de imposto para pagar", imposto);
    }
        return 0;
}