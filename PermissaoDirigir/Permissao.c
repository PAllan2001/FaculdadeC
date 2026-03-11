#include <stdio.h>
int main(){
    int idade;
    int emancipado;
    int tempoHabilitado;
    int habilitado;
    
    printf("Qual sua idade?\n");
    scanf("%d",&idade);

    if (idade>=30 && idade <= 49){
        return 0;
    }
    else if(idade >= 50 && idade <= 69){
        printf("Por possuir uma idade avancada voce precisa renovar sua carteira de habiltacao a cada 5 anos");
        return 0;
    }
    else if(idade >=70) {
        printf("Por possuir uma idade avancada voce precisa renovar sua carteira de habiltacao a cada 3 anos");
        return 0;
    }

    printf("Voce e emancipado?(1 = Sim / 0 = Nao)\n");
    scanf("%d", &emancipado);

    if(idade >=18 || idade >=16 && emancipado){
        printf("Voce esta permitido a tirar sua carteira de habilitacao\n");
        printf("\n");
    }
    else{
       printf("Voce nao tem permissao para tirar a carteira de habiltacao\n");
        return 0;
    }
    printf("Voce ja possui carteira de habilitacao(1 = Sim / 0 = Nao)\n");
    scanf("%d", &habilitado);

    if(!habilitado){
        printf("Tire sua carteira de habilitacao primeiro para poder dirigir\n");
        return 0;
    }
    printf("A quanto tempo voce possui carteira de habilitacao?(se menos de um ano = 0/ se mais de um ano = 1)\n");
    scanf("%d",&tempoHabilitado);

    if (!tempoHabilitado){
        printf("Cuidado voce ainda esta na provisoria(qualquer multa voce perdera sua carteira de habilitacao)\n");
    } else{
        printf("Voce ja tem a carteira de habilitacao de maneira definitiva\n");
    }
    
    return 0;

}