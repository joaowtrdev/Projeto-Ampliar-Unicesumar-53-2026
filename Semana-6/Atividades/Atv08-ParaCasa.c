/*
    Receba um programa que receba o cadastro de um aluno:
    - Nome
    - Idade
    - Nota 1
    - Nota 2
    - Média

    O programa deverá ter 1 FUNÇÃO para entrada dos dados do aluno.
    Deverá ter uma PROCEDIMENTO para calcular a média
    Deverá ter uma PROCEDIMENTO para exibir a média pro usuário

    Escrito em pair programming por Pedro e Rafael.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
    float nota1;
    float nota2;
    float media;
} TipoAluno;

TipoAluno aluno;

TipoAluno cadastrarAluno() {

    printf("Informe o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Informe a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &aluno.nota2);

    return aluno;
}

void calcularMedia() {

    aluno.media = (aluno.nota1 + aluno.nota2) / 2;
}

void exibirMedia() {

    printf(
        "\nAluno: %s\n"
        "Idade: %d\n"
        "Nota 1: %.1f\n"
        "Nota 2: %.1f\n"
        "Média: %.1f\n",
        aluno.nome,
        aluno.idade,
        aluno.nota1,
        aluno.nota2,
        aluno.media
    );
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    aluno = cadastrarAluno();

    calcularMedia();

    exibirMedia();

    return 0;
}