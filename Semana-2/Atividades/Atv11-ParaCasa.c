/*
    Escreva um programa que leia 4 idades e informe qual a mais velha e qual a mais nova.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int idade1, idade2, idade3, idade4;
    int maisVelha, maisNova;

    printf("Informe a primeira idade: ");
    scanf("%d", &idade1);
    
    printf("Informe a segunda idade: ");
    scanf("%d", &idade2);
    
    printf("Informe a terceira idade: ");
    scanf("%d", &idade3);
    
    printf("Informe a quarta idade: ");
    scanf("%d", &idade4);

    maisVelha = idade1;
    maisNova = idade1;

    if (idade2 > maisVelha) maisVelha = idade2;
    if (idade2 < maisNova) maisNova = idade2;

    if (idade3 > maisVelha) maisVelha = idade3;
    if (idade3 < maisNova) maisNova = idade3;

    if (idade4 > maisVelha) maisVelha = idade4;
    if (idade4 < maisNova) maisNova = idade4;

    printf("A maior idade é: %d\n", maisVelha);
    printf("A menor idade é: %d\n", maisNova);

    return 0;
}