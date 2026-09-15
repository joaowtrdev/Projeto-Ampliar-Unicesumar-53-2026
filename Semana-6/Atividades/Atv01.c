#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



void mostrarSaudacao(char nome[]) {
    printf("Olá %s !! Bem-Vindo ao nosso restaurante!!\n", nome);
}

char *trocarNome(char nome[]) {
    printf("Nome recebido: %s\n", nome);

    nome = "Elias";
    printf("Endereço nome: %p\n", &nome);

    return nome;
}

char *trocarNome2(char nome[]) {
    printf("Nome recebido: %s\n", nome);

    strcpy(nome, "Pamella");
    printf("Endereço do ponteiro *nome: %p\n", &nome);
    printf("Endereço para quem o ponteiro aponta: %p\n", (void *)nome);

    return nome;
}

int trocarNumero(int numero) {
    printf("Número recebido: %d\n", numero);

    numero = 30;

    return numero;
}



int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    // mostrarSaudacao("Alex Gonçalves");
    // mostrarSaudacao("Ricard Belo");
    // mostrarSaudacao("João Armindo");
    // mostrarSaudacao("Ruan Gustavo Moleta");
    // mostrarSaudacao("Kauan Dias");
    // mostrarSaudacao("Albert S");

    char nome[30] = "Andre Matheus";
    int numero = 10;

    // numero = trocarNumero(numero);
    // printf("Número trocado: %d\n", numero);

    printf("Endereço nome: %p\n", &nome);
    trocarNome2(nome);
    printf("Nome atualizado: %s\n", nome);

    char *resposta = trocarNome(nome);
    printf("Nome atualizado: %s\n", resposta);
    printf("Endereço nome: %p\n", &nome);
    printf("Endereço resposta: %p\n", &resposta);

    return 0;
}