/*
    Escreva um algotirmo em C que receba a idade de 10 pessoas e informe
    quem é a pessoa mais velha, quem é a pessoa mais nova e se essas pessoas são maior de idade ou menor de idade.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXPESSOAS 10

typedef struct {
    int idade;
} TipoPessoa;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int maisVelha, maisNova;
    TipoPessoa pessoas[MAXPESSOAS];

    for(int i = 0; i < MAXPESSOAS; i++) {
        printf("Informe a idade da %d° pessoa: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        if(i == 0) {
            maisNova = i;
            maisVelha = i;
        } else {
            if(pessoas[i].idade > pessoas[maisVelha].idade) {
                maisVelha = i;
            }

            if(pessoas[i].idade < pessoas[maisNova].idade) {
                maisNova = i;
            }
        }
        system("clear");
    }

    printf("A pessoa MAIS VELHA tem %d anos ", pessoas[maisVelha].idade);
    if(pessoas[maisVelha].idade >= 18) {
        printf("e é MAIOR de idade\n");
    } else {
        printf("e é MENOR de idade\n");
    }

    printf("A pessoa MAIS NOVA tem %d anos ", pessoas[maisNova].idade);
    if(pessoas[maisNova].idade >= 18) {
        printf("e é MAIOR de idade\n");
    } else {
        printf("e é MENOR de idade\n");
    }

    return 0;
}