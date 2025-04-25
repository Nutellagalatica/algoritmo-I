/*
a variavel int numero foi usada para armazenar o numero que o usuario vai digitar

o printf foi usado para mostrar a mensagem pedindo que o usuario digite um numero

o scanf foi usado para o usuario digitar o numero que será armazenado na variavel numero

o if foi usado para verificar se o numero é par
isso é feito verificando se o resto da divisão do numero por 2 (numero % 2) é igual a 0
se for, significa que o numero é par, e o printf mostra que o numero é par

caso o resto da divisão não seja 0, o else é executado, e o printf mostra que o numero é ímpar

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
int main(){
    int numero;
    printf("escreva um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
    printf("o numero eh par \n");}
    else{
        printf("o numero eh impar \n");
    }
    return 0;
}
