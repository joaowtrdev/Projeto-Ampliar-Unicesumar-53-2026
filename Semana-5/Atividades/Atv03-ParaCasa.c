/*
    Escreva um programa em C que receba o nome do modelo de 
    4 carros e seus valores de FIPE. Desta vez, utilizando estrutura Heterogênea.

    O programa deverá retornar o carro mais caro e o mais barato.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define QTD_CARROS 4

struct Carro {
    char modelo[50];
    float valorFipe;
};

int main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    system("clear");

    struct Carro carros[QTD_CARROS];

    int maisCaro = 0, maisBarato = 0;

    for(int i = 0; i < QTD_CARROS; i++) {

        printf("\n::: CARRO %d :::\n", i + 1);

        printf("Informe o modelo do carro: ");
        fgets(carros[i].modelo, sizeof(carros[i].modelo), stdin);
        carros[i].modelo[strcspn(carros[i].modelo, "\n")] = '\0';

        printf("Informe o valor da FIPE: R$ ");
        scanf("%f", &carros[i].valorFipe);

        getchar();
    }

    for(int i = 1; i < QTD_CARROS; i++) {

        if(carros[i].valorFipe > carros[maisCaro].valorFipe) {
            maisCaro = i;
        }

        if(carros[i].valorFipe < carros[maisBarato].valorFipe) {
            maisBarato = i;
        }
    }

    printf(
        "\n\n::: CARRO MAIS CARO :::\n"
        "Modelo: %s\n"
        "Valor FIPE: R$ %.2f\n",
        carros[maisCaro].modelo, carros[maisCaro].valorFipe
    );

    printf(
        "\n::: CARRO MAIS BARATO :::\n"
        "Modelo: %s\n"
        "Valor FIPE: R$ %.2f\n",
        carros[maisBarato].modelo, carros[maisBarato].valorFipe
    );

    return 0;
}