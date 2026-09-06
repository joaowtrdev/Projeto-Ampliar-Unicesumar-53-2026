/*
    Escreva um algoritmo em C que receba um número inteiro e retorne o resto deste
    número em uma divisão por 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_BRA");
    
    int resto, num; 

    printf("Informe um numero: ");
    scanf("%d", &num);

    resto = num % 2;

    printf("Resto = %d", resto);

    return 0;
}
