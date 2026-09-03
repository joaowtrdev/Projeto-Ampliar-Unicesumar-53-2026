/*
    Escreva 4 nomes dentro de um array
*/

#include <stdio.h>
#include <string.h>

int main() {

    char nomes[4][20];

    for (int i = 0; i < 4; i++) {
        printf("Digite o %d nome: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);

        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    printf("\nNomes digitados:\n");

    for (int i = 0; i < 4; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}