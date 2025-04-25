/*
as variaveis int numero1 e numero2 foram usadas para o usuario digitar dois numeros inteiros

a variavel int resultado1 foi usada para armazenar o resultado da soma dos dois numeros

o printf foi usado para mostrar a mensagem pedindo que o usuario digite o primeiro numero
o scanf foi usado para o usuario digitar o valor do primeiro numero

o printf foi usado para mostrar a mensagem pedindo que o usuario digite o segundo numero
o scanf foi usado para o usuario digitar o valor do segundo numero

a soma de numero1 com numero2 foi feita e o resultado foi armazenado na variavel resultado1

o printf foi usado para mostrar na tela o resultado da soma

o \n foi usado para pular uma linha depois de mostrar o resultado

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
 int main(){
    int numero1 ;
    int numero2 ;
    int resultado1;

    printf("coloque o primeio numero: ");
    scanf("%d", &numero1);

    printf("coloque o segundo numero: ");
    scanf("%d", &numero2);
    
    resultado1 = numero1 + numero2;

    printf("resultado da soma %d \n",resultado1); 

    return 0;
 }
