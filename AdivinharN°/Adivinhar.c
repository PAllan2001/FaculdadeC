#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int nSecreto;
    int nTentativa = 0;
    int nDigitado;
    srand(time(NULL));
    nSecreto = rand() %50+1;
    printf("Un numero aleatorio sera gerado\n");
    printf("Voce tera 5 tentativas para adivinhar\n");
    printf("Pressione enter para continuar\n");
    getchar();

    while (nTentativa < 5){
        printf("Digite seu palpite\n");
        scanf("%d", &nDigitado);

        if(nDigitado < 1 || nDigitado >50){
            printf("O numero deve estar entre 1 e 50\n");
            continue;
        } 
        nTentativa ++;

        if(nDigitado == nSecreto){
            printf("Voce acertou\n");
            return 0;
        }
        else if (nDigitado < nSecreto){
            printf("O Numero e maior\n");
        }
        else{
            printf("O Numero e menor\n");
        }

        printf("Tentativas restantes: %d\n", 5 - nTentativa);
    }
     printf("Voce perdeu. O numero era %d\n", nSecreto);

    return 0;

}