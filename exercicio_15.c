/*
as variáveis int numero1, numero2, numero3 e media são usadas para armazenar três números inteiros e a média desses números

o printf foi usado para mostrar a mensagem pedindo para o usuário digitar o primeiro número

o scanf foi usado para capturar o número digitado pelo usuário e armazená-lo na variável numero1

o printf foi usado novamente para pedir ao usuário que digite o segundo número

o scanf foi usado para capturar o segundo número e armazená-lo na variável numero2

o printf foi usado mais uma vez para pedir ao usuário que digite o terceiro número

o scanf foi usado para capturar o terceiro número e armazená-lo na variável numero3

a variável media foi calculada somando os três números e dividindo o resultado por 3, que é a fórmula para calcular a média aritmética

o printf foi usado para mostrar o valor da média calculada para o usuário

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
 int main(){
    int numero1;
    int numero2;
    int numero3;
    int media;

   printf("digite o primeiro numero: ");
   scanf("%d", &numero1);

   printf("digite o segundo numero: ");
   scanf("%d", &numero2);

   printf("digite o terceiro numero: ");
   scanf("%d", &numero3);

   media = (numero1 + numero2 + numero3) /3;
   
   printf("a media deste 3 numeros e:%d \n",media);

   return 0;
 }


