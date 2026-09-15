/*
    Escreva um algoritmo em C que receba duas notas de um aluno, calcule e informe a média.
    Utilize sub-rotinas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXNOTAS 2

typedef struct {
    float notas[MAXNOTAS];
    float media;
} TipoAluno;

float pedirNotas(char string[]) {
    float nota;

    printf("Informe a %s nota: ", string);
    scanf("%f", &nota);

    return nota;
}

void calcularMedia(TipoAluno aluno) {
    float somarNotas;

    for(int i = 0; i < MAXNOTAS; i++) {
        if(i == 0) {
            somarNotas = aluno.notas[i];
        } else {
            somarNotas += aluno.notas[i];
        }
    }

    aluno.media = somarNotas / MAXNOTAS;

    printf("A média do aluno é: %.1f\n", aluno.media);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    TipoAluno aluno1;

    aluno1.notas[0] = pedirNotas("primeira");
    aluno1.notas[1] = pedirNotas("segunda");

    calcularMedia(aluno1);

    return 0;
}