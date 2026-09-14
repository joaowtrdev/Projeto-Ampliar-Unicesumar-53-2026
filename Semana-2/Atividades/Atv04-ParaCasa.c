/*
    Escreva um programa que apresente as quatro opera??es aritmeticas pro usu?rio.
    Como uma calculadora. O usu?rio dever? escolher qual opera??o ele quer realizar
    e informar 2 n?meros.

    1. Soma
    2. Subtra??o
    3. Divis?o
    4. Multiplica??o
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int operacao;
    float num1, num2, resultado;

    printf(
        "1. Soma\n"
        "2. Subtração\n"
        "3. Divisão\n"
        "4. Multipicação\n"
        "Escolha a operação que deseja realizar: ");

    scanf("%d", &operacao);

    switch (operacao) {
    case 1:
        printf("Infome o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        resultado = num1 + num2;

        printf("Resultado da soma é %.2f.", resultado);
        break;
    case 2:
        printf("Infome o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        resultado = num1 - num2;

        printf("Resultado da subtração é %.2f.", resultado);
        break;
    case 3:
        printf("Infome o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        resultado = num1 / num2;

        printf("Resultado da divisão é %.2f.", resultado);
        break;
    case 4:
        printf("Infome o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        resultado = num1 * num2;

        printf("Resultado da multiplicação é %.2f.", resultado);
        break;

    default:
        printf("Opção invalida.");
        break;
    }

    return 0;
}