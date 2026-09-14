/*
    Escreva um programa que receba a idade de 2 pessoas e informe qual a mais velha.

    < menor que
    > maior que
    <= menor ou igual que
    >= maior ou igual que 
    == igual a
    != diferente de 
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR");
    system("cmd /c cls");
    
    int idade1, idade2;

    printf("Infome sua idade: ");
    scanf("%d", &idade1);

    printf("Informe sua idade: ");
    scanf("%d", &idade2);

    if (idade1 > idade2 && idade2 > idade1) 
    {
        printf("A pessoa mais velha é a que tem %d anos.", idade1);
    } else {
        printf("A pessoa mais velha é a que tem %d anos.", idade2);
    }

    return 0;

}