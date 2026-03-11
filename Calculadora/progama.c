#include <stdio.h>
int main(){
    double num1, num2;
    int opcao = -1;

    while(opcao != 0) {

    printf("Insira um numero:\n");
    scanf("%lf", &num1);

    printf("Insira outro numero:\n");
    scanf("%lf", &num2);

    printf("===Escolha uma opcao===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("O resultado da soma e %.2lf\n", num1 + num2);
            break;

        case 2:
            printf("O resultado da subtracao e %.2lf\n",num1 - num2);
            break;
        case 3:
            if(num1 == 0 || num2 == 0){
                printf("Qualquer numero multpicado por 0 e 0\n");
            }
            else{
            printf("O resultado da multipicacao e %.2lf\n",num1 * num2);
            }
             break;
        case 4:
            if(num2 != 0){
                printf("O resultado da divisao e %.2lf\n",num1 / num2);
        } else {
            printf("Erro: divisao por zero\n");
        }
            break;

        case 0:
            printf("Fechando o Programa");
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }
}
    return 0;
    
}