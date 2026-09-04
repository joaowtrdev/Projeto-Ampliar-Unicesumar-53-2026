/*
    Escreva um programa em C que receba o nome do modelo de 
    4 carros e seus valores de FIPE. Desta vez, utilizando estrutura Heterogênea.

    O programa deverá retornar o carro mais caro e o mais barato.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXCARROS 4

typedef struct {
    char modeloCarro[50];
    float valor;
} TipoCarro;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int carroMaisCaro, carroMaisBarato;
    TipoCarro carros[MAXCARROS];

    for(int i = 0; i < MAXCARROS; i++) {
        printf("Informe o modelo do %d° carro: ", i + 1);
        fgets(carros[i].modeloCarro, sizeof(carros[i].modeloCarro), stdin);
        carros[i].modeloCarro[strcspn(carros[i].modeloCarro, "\n")] = '\0';

        printf("Informe o valor do carro: ");
        scanf("%f", &carros[i].valor);
        getchar();

        if(i == 0) {
            carroMaisBarato = i;
            carroMaisCaro = i;
        } else {
            if(carros[i].valor > carros[carroMaisCaro].valor) {
                carroMaisCaro = i;
            }

            if(carros[i].valor < carros[carroMaisBarato].valor) {
                carroMaisBarato = i;
            }
        }
        system("clear");
    }

    printf("O carro mais CARO foi o modelo %s no valor de R$%.2f\n", carros[carroMaisCaro].modeloCarro, carros[carroMaisCaro].valor);

    printf("O carro mais BARATO foi o modelo %s no valor de R$%.2f\n", carros[carroMaisBarato].modeloCarro, carros[carroMaisBarato].valor);

    return 0;
}