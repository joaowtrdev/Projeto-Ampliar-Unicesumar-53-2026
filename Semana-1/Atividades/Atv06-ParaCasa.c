/*
    Escreva um algoritmo que receba 4 notas de um aluno e calcule a média.
    M = (N1+N2+N3+N4) / 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_BRA");

    float n1, n2, n3, n4, media;

    printf("Infome a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Infome a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Infome a terceira nota: ");
    scanf("%f", &n3);
    
    printf("Infome a quarta nota: ");
    scanf("%f", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;

    printf("A média do aluno é: %.1f", media);
}
