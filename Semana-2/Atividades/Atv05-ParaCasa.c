/*
    Escreva um algortimo que receba 2 notas de um aluno. O pgorgrama deverá calcular a média do aluno e informar se
    ele está aprovado (média maior que 7), em recuperação (média entre 5 e 7) ou reprovado (média menor que 5).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    float nota1, nota2, media;

    printf("Infome a primeira nota: ");
    scanf("%f", &nota1);

    printf("Infome a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if(media > 7) {
        printf("Sua média é %.2f você está aprovado.", media);
    } else if(media >= 5) {
        printf("Sua média é %.2f você está de recuperação.", media);
    } else {
        printf("Sua média é %.2f você está reprovado.", media);
    }

    return 0;
}