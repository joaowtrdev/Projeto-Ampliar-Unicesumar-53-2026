/*
    Escreva um programa em C para resolver a fórmula de Bhaskara.

    Entrada de dados:
    - Valor de A, B e C.

    Processamento:
    - Verificar se A é diferente de 0.
    - Calcular o delta. (delta = b² - 4.a.c)
    - Verificar se o delta é:
        - negativo: A equação não possui raízes reais
        - igual a zero: calcular apenas x = -b / 2a
        - positivo: x = -b +- raiz de delta / 2.a
    - Calcular as raízes quando possível.

    Saída:
    - Exibir o valor do delta.
    - Exibir as raízes reais da equação.

    Teste:
    A = 1
    B = -5
    C = 6

    Delta = 1
    X1 = 3
    X2 = 2

    Veja mais sobre a fórmula de Bhaskara em:
    https://www.todamateria.com.br/formula-de-bhaskara/
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    float numA, numB, numC, delta, x1, x2;

    printf("Informe o valor de A: ");
    scanf("%f", &numA);

    printf("Informe o valor de B: ");
    scanf("%f", &numB);

    printf("Informe o valor de C: ");
    scanf("%f", &numC);

    if(numA == 0) {
        printf("Não é uma equação do segundo grau, pois A deve ser diferente de 0\n");
        return 1;
    } else {
        delta = pow(numB, 2) - (4 * numA * numC);

        if(delta < 0) {
            printf("\nDelta = %.2f\n", delta);
            printf("A equação não possui raízes reais\n");
        } else if(delta == 0) {
            x1 =  -numB / (2 * numA);

            printf("\nDelta = %.2f\n", delta);
            printf("A equação possui apenas uma raiz real.\n");
            printf("X = %.2f\n", x1);
        } else {
            x1 = (-numB + sqrt(delta)) / (2 * numA);
            x2 = (-numB - sqrt(delta)) / (2 * numA);

            printf("\nDelta = %.0f\n", delta);
            printf("A equação possui duas raízes reais\n");
            printf(
                "X1 = %.0f\n"
                "X2 = %.0f\n", x1, x2
            );
        }
    }

    return 0;
}