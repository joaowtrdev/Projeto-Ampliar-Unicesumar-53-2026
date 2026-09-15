/*
    Escreva uma calculadora em C, com as 4 operações aritméticas.
    Onde cada operação deverá ser em uma sub-rotina diferente.
    Escreva uma subrotina para saída de dados.
    O programa deverá ser um menu de 5 opções, onde:
    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
    5. Sair
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar(float numero1, float numero2) {
    return numero1 + numero2;
}

float subtrair(float numero1, float numero2) {
    return numero1 - numero2;
}

float dividir(float numero1, float numero2) {
    return numero1 / numero2;
}

float multiplicar(float numero1, float numero2) {
    return numero1 * numero2;
}

void exibirResultado(float resultado) {
    printf("Resultado: %.2f\n", resultado);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int opcao = 0;
    float numero1, numero2, resultado;

    while(opcao != 5) {

        printf(
            "\n1. Soma\n"
            "2. Subtração\n"
            "3. Divisão\n"
            "4. Multiplicação\n"
            "5. Sair\n"
            "Escolha uma opção: "
        );

        scanf("%d", &opcao);

        if(opcao >= 1 && opcao <= 4) {

            printf("\nInforme o primeiro número: ");
            scanf("%f", &numero1);

            printf("Informe o segundo número: ");
            scanf("%f", &numero2);
        }

        switch(opcao) {

            case 1:
                resultado = somar(numero1, numero2);
                exibirResultado(resultado);
                break;

            case 2:
                resultado = subtrair(numero1, numero2);
                exibirResultado(resultado);
                break;

            case 3:
                if(numero2 == 0) {
                    printf("Não é possível dividir por zero.\n");
                } else {
                    resultado = dividir(numero1, numero2);
                    exibirResultado(resultado);
                }
                break;

            case 4:
                resultado = multiplicar(numero1, numero2);
                exibirResultado(resultado);
                break;

            case 5:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida! Tente novamente...\n");
                break;
        }
    }

    return 0;
}