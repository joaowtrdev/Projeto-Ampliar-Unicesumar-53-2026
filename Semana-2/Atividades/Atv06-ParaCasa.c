/*
    Escreva um algortimo em C que receba 3 números inteiros
    e informe qual deles é o maior.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

        int num1, num2, num3;

        printf("Infome o primeiro número: ");
        scanf("%d", &num1);
        
        printf("Infome o segundo número: ");
        scanf("%d", &num2);
        
        printf("Infome o terceiro número: ");
        scanf("%d", &num3);

        if (num1 > num2 && num1 > num3) {
            printf("O maior número é %d.", num1);
        } else if (num2 > num1 && num2 > num3) {
            printf("O maior número é %d.", num2);
        } else {
            printf("O maior número é %d.", num3);
        }
    
    return 0;
}