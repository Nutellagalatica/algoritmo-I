/*
O começa declarando as variáveis:

numero1 e numero2: Elas irão armazenar os números que o usuário vai digitar.

resultado: Vai armazenar o resultado da soma entre numero1 e numero2.

O printf é utilizado para exibir a mensagem pedindo que o usuário digite o primeiro número.

O scanf é usado para capturar o valor digitado pelo usuário e armazená-lo na variável numero1.

O printf é novamente utilizado para exibir a mensagem pedindo o segundo número.

O scanf captura o segundo número e o armazena em numero2.

O programa soma os valores de numero1 e numero2 e armazena o resultado na variável resultado.

O if verifica se o valor de resultado é maior ou igual a 10:

Se a soma for maior ou igual a 10, o programa exibirá a mensagem: "o resultado desta conta é maior que 10".

Caso contrário, o programa exibirá: "o resultado desta conta é menor que 10".

Por fim, o return 0; indica que o programa terminou corretamente.
*/
#include <stdio.h>
 int main(){
  int numero1;
  int numero2;
  int resultado;

  printf("digite o primeiro numero: ");
  scanf("%d", &numero1);

  printf("digite o segundo numero: ");
  scanf("%d", &numero2);

resultado= numero1 +numero2;
if (resultado >= 10){
    printf("o resultado desta conta e maior que 10 \n");
} else{
printf("o resultado desta conta e menor que 10 \n");
}
return 0;
 }