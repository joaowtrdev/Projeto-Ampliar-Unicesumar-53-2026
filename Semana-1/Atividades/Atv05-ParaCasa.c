/*
    Escreva um programa que calcule e exiba a área de um círculo.
    Como dado de entrada, o programa deverá solicitar o raio do círculo ao usuário.
    Fórmula: Área = pi x raio^2
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "portuguese_BRA");
    const float pi = 3.14159;
    float raio, area; 

    printf("Infome o valor do raio: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área do círculo é = %.2f", area);
}