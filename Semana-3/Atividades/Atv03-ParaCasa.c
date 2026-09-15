/*
    Escreva um algortimo que receba um número e escreva na tela a 
    tabuada de multiplicação deste número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero*i);
    }

    return 0;
}
