/*
    EXERCÍCIO — SOMA

    Crie uma função recursiva que receba um número
    inteiro positivo e calcule:

        1 + 2 + 3 + ... + número

    Exemplo:

        soma(5)

    Resultado:

        15
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int numero) {

    if(numero <= 0) {
        return 0;
    }

    return numero + soma(numero - 1);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int numero;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("Resultado da soma: %d\n", soma(numero));
    } else {
        printf("O número deve ser positivo.\n");
    }

    return 0;
}
