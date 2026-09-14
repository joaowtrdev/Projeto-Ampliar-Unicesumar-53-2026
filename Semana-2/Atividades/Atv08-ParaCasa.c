/*
    Escreva um programa que receba a altura e peso de uma pessoa.
    O programa deverá calcular o IMC dessa pessoa e informar se ela está: 

    Abaixo do peso - IMC menor ou igual 18,5
    Peso normal - IMC entre 18,5 e 24,99
    Sobrepeso - IMC entre 25 e 29,99
    Obeso - IMC maior ou igual a 30

    IMC = PESO / ALTURA²
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    float peso, altura, IMC;

    printf("Infome seu peso: ");
    scanf("%f", &peso);
    
    printf("Infome sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    if (IMC <= 18.5) {
        printf("Você está abaixo do peso.");
    } else if (IMC >= 25 && IMC <= 29.99) {
        printf("Você está com sobrepeso.");
    } else if (IMC >= 18.5 && IMC <= 24.99) {
        printf("Você está com o peso normal.");
    } else {
        printf("Você está obeso.");
    }

    return 0;
}