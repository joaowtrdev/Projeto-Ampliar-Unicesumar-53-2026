/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int opcao = 0, soma1, soma2, multiplicao1, multiplicao2, resultadoSoma, resultadoMultiplicao; 

    while (opcao != 3){

        printf("1. Somar 2 numeros\n2. Multiplicar 2 numeros\n3. Encerrar\n");
        scanf("%d", &opcao);

        system("cmd /c cls");

        switch (opcao){
            case 1:
            printf("Digite o primeiro numero para somar:\n");
            scanf("%d", &soma1);

            printf("Digite o segundo numero para somar:\n");
            scanf("%d", &soma2);

            resultadoSoma = soma1 + soma2;

            printf("Resultado da soma: %d \n", resultadoSoma);
            system("cmd /c pause");
            system("cmd /c cls");
                break;

            case 2:
            printf("Digite o primeiro numero para multiplicao:\n");
            scanf("%d", &multiplicao1);

            printf("Digite o segundo numero para multiplicao:\n");
            scanf("%d", &multiplicao2);

            resultadoMultiplicao = multiplicao1 * multiplicao2;

            printf("Resultado da multipicacao: %d \n", resultadoMultiplicao);
            system("cmd /c pause");
            system("cmd /c cls");
                break;

            case 3:
            opcao = 3;
                break;

            default:
                printf ("Opçao errada. Tente de novo!\n");

        }
        
    }   printf("Encerrando...");
    return 0;
    
}