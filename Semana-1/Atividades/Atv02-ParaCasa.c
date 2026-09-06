/*
    Escreva um algoritmo que receba duas notas de um aluno e calcule a média.
*/

#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Infome a primeira nota: ");
    scanf("%f", &nota1);

    printf("Infome a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2; 

    printf("Media = %2.f", media);
    
    return 0;
}
