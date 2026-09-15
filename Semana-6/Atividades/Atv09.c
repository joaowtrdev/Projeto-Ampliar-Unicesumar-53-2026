// RECURSIVIDADE

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void contarRegressiva(int numero, int indice) {
    if(numero == 0) {
        printf("Fim!\n");
        return;
    }

    printf("Número: %d\nÍndice: %d\n", numero, indice);
    
    system("pause");

    indice++;

    contarRegressiva(numero - 1, indice);

    system("pause");

    printf("Saindo do índice: %d\n", indice);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int numero, indice = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);

    contarRegressiva(numero, indice);

    return 0;
}