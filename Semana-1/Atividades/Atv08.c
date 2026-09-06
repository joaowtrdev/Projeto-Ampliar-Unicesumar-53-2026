/*
    Escreva um programa que receba uma temperatura em Celsius e converta para Fahrenheit.

    F = (C * 1.8) + 32    ||   F = (9/5 * C) + 32    ||    F = (C * (9/5)) + 32
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BRA");
    system("cmd /c cls");

    int tempC, tempF;
    
    printf("Temperatura em Celsius: ");
    scanf("%d", &tempC);

    tempF = (tempC * 1.8) + 32;

    printf("Temperatura em Fahrenheit: %d", tempF);

    return 0;
}
