#include <stdio.h>

int main() {

    double temperatura;
    char unidade;
    double celsius = 0;

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    printf("Informe a unidade de origem:\n");
    printf("C - Celsius\n");
    printf("F - Fahrenheit\n");
    printf("K - Kelvin\n");
    printf("Escolha: ");
    scanf(" %c", &unidade);

    switch(unidade){

        case 'C':
        case 'c':
            celsius = temperatura;
            break;

        case 'F':
        case 'f':
            celsius = (temperatura - 32) / 1.8;
            break;

        case 'K':
        case 'k':
            celsius = temperatura - 273.15;
            break;

        default:
            printf("Unidade invalida!\n");
            return 0;
    }

    double fahrenheit = (celsius * 1.8) + 32;
    double kelvin = celsius + 273.15;

    printf("\n=== RESULTADOS ===\n");
    printf("Celsius: %.2lf C\n", celsius);
    printf("Fahrenheit: %.2lf F\n", fahrenheit);
    printf("Kelvin: %.2lf K\n", kelvin);

    return 0;
}
