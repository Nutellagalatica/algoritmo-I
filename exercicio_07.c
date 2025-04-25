/*
as variaveis float numero1 e numero2 foram usadas para o usuario digitar dois numeros decimais (com virgula)

a variavel float resultado1 foi usada para guardar o resultado da soma do primeiro com o segundo numero

as variaveis float numero3 e numero4 foram usadas para o usuario digitar mais dois numeros decimais

a variavel float resultado2 foi usada para guardar o resultado da soma do terceiro com o quarto numero

a variavel float resultado_final foi usada para guardar o resultado da divisao de resultado1 por resultado2

o primeiro printf foi usado para pedir ao usuario que digite o primeiro numero
o primeiro scanf foi usado para o usuario digitar esse numero

o segundo printf foi usado para pedir o segundo numero
o segundo scanf foi usado para o usuario digitar o segundo numero

os dois primeiros numeros sao somados e o resultado é armazenado na variavel resultado1

o printf mostra o resultado da primeira soma

em seguida, o programa pede para o usuario digitar um terceiro numero e um quarto numero, usando printf e scanf

esses dois novos numeros sao somados e o resultado é armazenado na variavel resultado2

o printf mostra o resultado da segunda soma

entao o programa faz a divisao entre resultado1 e resultado2, e guarda isso na variavel resultado_final

por fim, o printf mostra o resultado final da divisao

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
 int main(){
    float numero1 ;
    float numero2 ;
    float resultado1;
    float numero3;
    float numero4;
    float resultado2;
    float resultado_final;

    printf("coloque o primeio numero: ");

    scanf("%f", &numero1);

    printf("coloque o segundo numero: ");

    scanf("%f", &numero2);
    
    resultado1= numero1 + numero2;

    printf("resultado da soma %f \n",resultado1); 

    printf("coloque um terceiro numero: ");

    scanf("%f", &numero3);

    printf("coloque o quarto numero: ");

    scanf("%f", &numero4);

    resultado2= numero3 + numero4;

    printf("resultado da segunda soma: %f \n", resultado2);

    resultado_final= resultado1 / resultado2;
    
    printf("resultado final: %f \n", resultado_final);


    return 0;
 }
