#include <stdio.h>
int main(){

    int n1, n2,i;
    printf("digite um numero\n");
    scanf("%d", &n1);

    printf("digite outro numero\n");
    scanf("%d", &n2);

    if (n1 > n2) 
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("================MENU===============\n");
    printf("1 - se quiser fazer uma contagem do menor para o maior\n");
    printf("2 - se quiser fazer uma contagem do maior para o menor\n");
    printf("3 - se quiser fazer uma contagem do menor para o maior somente com numeros pares\n");
    printf("4 - se quiser fazer uma contagem do menor para o maior somente com numeros impares\n");
    printf("5 - se quiser fazer uma contagem do maior para o menor somente com numeros pares\n");
    printf("6 - se quiser fazer uma contagem do maior para o menor somente com numeros impares\n");

    int opcao;
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        for(i = n1; i <=n2; i++){
        printf("i = %d\n", i);
        }
        break;

    case 2:
        for(i = n2; i >=n1; i--){
        printf("i = %d\n", i);
        }
        break;

    case 3:
        for(i = n1; i <=n2; i++){
            if( i % 2 == 0){
        printf("i = %d\n", i);
            }
        }
        break;
    case 4:
        for(i = n1; i <=n2; i++){
            if( i % 2 !=0){
        printf("i = %d\n", i);
            }
        }
        break;
    case 5:
        for(i = n2; i >=n1; i--){
            if( i % 2 == 0){
        printf("i = %d\n", i);
            }
        }
        break;
    case 6:
        for(i = n2; i >=n1; i--){
            if( i % 2 !=0){
        printf("i = %d\n", i);
            }
        }  
        break;      
    
    default:
        printf("opcao invalida");
        break;
    }
    
    return 0;
}