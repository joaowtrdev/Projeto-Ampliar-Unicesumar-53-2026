#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void mostrarSaudacao(char nome[]) {
    printf("Olá %s !! Bem-Vindo ao nosso restaurante!!\n", nome);
}

char *trocarNome(char nome[]) {
    printf("Nome recebido: %s\n", nome);
    nome = "Elias";

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

    mostrarSaudacao("Alex Gonçalves");
    mostrarSaudacao("Ricard Belo");
    mostrarSaudacao("João Armindo");
    mostrarSaudacao("Ruan Gustavo Moleta");
    mostrarSaudacao("Kauan Dias");
    mostrarSaudacao("Albert S");

    char nome[30] = "Andre Matheus";
    int numero = 10;

    numero = trocarNumero(numero);
    printf("Número trocado: %d\n", numero);

    char *retorno = trocarNome(nome);
    printf("Nome atualizado: %s\n", retorno);



    return 0;
}