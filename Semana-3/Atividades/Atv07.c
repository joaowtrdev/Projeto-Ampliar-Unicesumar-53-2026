#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota;

    do
    {
        printf("infome a nota do aluno ou um valor menor que 0 para encerrar\nNota: ");
        scanf("%f", &nota);
    } while (nota >= 0);

    printf("programa encerrado...");

    return 0;
}