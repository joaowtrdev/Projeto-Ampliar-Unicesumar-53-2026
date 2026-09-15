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

int mostrarMenu() {
    int opcao;
    printf(
        "1. Soma\n"
        "2. Subtração\n"
        "3. Divisão\n"
        "4. Multiplicação\n"
        "5. Sair\n"
        "Escolha: "
    );
    scanf("%d", &opcao);

    return opcao;
}

float pedirNumero(char string[]) {
    float numero;
    printf("Informe o %s número: ", string);
    scanf("%f", &numero);

    return numero;
}

void somar(float num1, float num2) {
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

void subtrair(float num1, float num2) {
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

void dividir(float num1, float num2) {
    if(num2 == 0) {
        printf("Impossível fazer divisão por ZERO!!\n");
    } else {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }
}

void multiplicar(float num1, float num2) {
    printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    float num1, num2;

    do {
        system("clear");
        opcao = mostrarMenu();
        getchar();

        if(opcao >= 1 && opcao <= 4) {
            num1 = pedirNumero("primeiro");
            num2 = pedirNumero("segundo");
        }

        switch (opcao)
        {
        case 1:
            somar(num1, num2);
            system("pause");
        break;

        case 2:
            subtrair(num1, num2);
            system("pause");
        break;

        case 3:
            dividir(num1, num2);
            system("pause");
        break;

        case 4:
            multiplicar(num1, num2);
            system("pause");
        break;

        case 5:
            printf("Muito obrigado por utilizar nosso sistema :)\nEncerrando...\n");
        break;
        
        default:
            printf("Opção inválida!! Tente novamente!!\n");
            system("pause");
        break;
        }

    } while(opcao != 5);

    return 0;
}