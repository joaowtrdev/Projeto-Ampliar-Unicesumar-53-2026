/*
    Escreva um programa que calcule a área de um retangulo.
    A = B * H
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR");
    system("cmd /c cls");

    int base, altura, area;

    printf("Informe o lado menor: ");
    scanf("%d", &base);
    
    printf("Informe o lado maior: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A área do retangulo é = %d", area);

    return 0;
}