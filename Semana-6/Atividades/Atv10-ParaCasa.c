/*
    EXERCÍCIO — CONTAGEM

    Crie uma função recursiva que receba um número
    inteiro e conte de 1 até esse número.

    Exemplo:

        contar(5);

    Resultado:

        1
        2
        3
        4
        5
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void contar(int numero) {

    if(numero <= 0) {
        return;
    }

    contar(numero - 1);

    printf("%d\n", numero);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    contar(numero);

    return 0;
}
