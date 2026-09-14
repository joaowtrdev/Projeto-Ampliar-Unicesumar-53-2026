/*
    Escreva um programa que receba 2 notas de um aluno.
    O programa deverá calcular a média das notas e informar se o aluno 
    está aprovado ou reprovado. Média para aprovação tem que ser 
    igual ou maior que 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR");
    system("cmd /c cls");

    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if(media >= 6){
        printf("Aprovado, sua m?dia ? %.2f.", media);
    } else {
        printf("Reprovado, sua m?dia ? %.2f.", media);
    }
    
    return 0;
}