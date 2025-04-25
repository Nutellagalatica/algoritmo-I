/*
as variáveis float comprimento, altura e largura são usadas para armazenar valores decimais (números com casas decimais) que representam as dimensões de um objeto ou espaço

o printf foi usado para pedir ao usuário para digitar o valor do comprimento em metros

o scanf foi usado para capturar o número digitado pelo usuário e armazená-lo na variável comprimento

o printf foi usado novamente para pedir ao usuário para digitar a altura em metros

o scanf foi usado para capturar o número digitado pelo usuário e armazená-lo na variável altura

o printf foi usado mais uma vez para pedir ao usuário para digitar a largura em metros

o scanf foi usado para capturar o número digitado pelo usuário e armazená-lo na variável largura

o printf foi usado para exibir o valor armazenado na variável comprimento, mostrando na tela o comprimento em metros

o printf foi usado novamente para exibir o valor armazenado na variável largura, mostrando na tela a largura em metros

o printf foi usado para exibir o valor armazenado na variável altura, mostrando na tela a altura em metros

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
 int main(){
    float comprimento;
    float altura ;
    float largura;

    printf("digite o comprimento em metros: ");
    scanf("%f", &comprimento);
    
    printf("digite a altura em metros: ");
    scanf("%f", &altura);

    printf("digite a largura em metros: ");
    scanf("%f", &largura);

    printf("comprimento=%f \n", comprimento);
    printf("largura =%f \n", largura);
    printf("altura=%f \n", altura);
    return 0;
 }