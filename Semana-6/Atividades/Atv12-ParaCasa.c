/*
    EXERCÍCIO — FATORIAL

    Crie uma função recursiva que calcule o fatorial
    de um número.

    Exemplo:

        fatorial(5)

    Resultado:

        120
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

unsigned long long fatorial(int numero) {

    if(numero <= 1) {
        return 1;
    }

    return numero * fatorial(numero - 1);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int numero;

    printf("Informe um número inteiro de 0 a 20: ");
    scanf("%d", &numero);

    if(numero >= 0 && numero <= 20) {
        printf("Resultado do fatorial: %llu\n", fatorial(numero));
    } else {
        printf("O número deve estar entre 0 e 20.\n");
    }

    return 0;
}
