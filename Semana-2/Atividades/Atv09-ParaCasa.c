/*
    Escreva um programa que receba o cadastro de uma pessoa, contendo: Idade, CPF e código para sexo.

    Se o código for 1, a pessoa é do sexo masculino.
    Se o código for 2, a pessoa é do sexo feminino.
    Se o código for 3, a pessoa optou por não informar.

    O programa deverá escrever na tela a idade, o CPF e o sexo da pessoa.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int idade, sexo;
    char cpf[12];

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    printf("Informe seu CPF: ");
    scanf("%11s", cpf);
    
    printf(
        "Informe seu sexo\n"
        "Digite 1 para masculino\n"
        "Digite 2 para feminino\n"
        "Digite 3 para não informar.\n"
        "Escolha uma das opções acima: ");
    scanf("%d", &sexo);

    switch (sexo) {
        case 1:
            printf("%d", idade);
            printf("\n%s", cpf);
            printf("\nMasculino");
            break;
        
        case 2:
            printf("%d", idade);
            printf("\n%s", cpf);
            printf("\nFeminino");
            break;
        
        case 3:
            printf("%d", idade);
            printf("\n%s", cpf);
            printf("\nPrefiro não informar");
            break;
        
        case 4:
            printf("Opção invalida!! Tente novamente...");
            break;
        
        default:
            break;
    }
    
    return 0;
}
