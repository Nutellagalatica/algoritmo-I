/*O programa começa declarando duas variáveis:

    real: Esta variável vai armazenar um número real (ou seja, um número com casas decimais).

    inteiro: Esta variável vai armazenar um número inteiro (um número sem casas decimais).

O printf é usado para exibir uma mensagem pedindo que o usuário digite um número real.

O scanf é usado para capturar o número real digitado pelo usuário e armazená-lo na variável real.

A linha inteiro = (int) real; converte o número real para inteiro. A conversão para inteiro basicamente "descarta" a parte decimal do número. Por exemplo, se o número real for 7.89, ele será convertido para 7, sem arredondamento, apenas removendo a parte decimal.

O printf é usado para exibir o valor de inteiro, que é o número convertido para inteiro.

o return 0; indica que o programa terminou corretamente.
*/
#include <stdio.h>
 int main(){
    float real;
    int inteiro;
    
    printf("digite um numero real: ");
    scanf("%f", &real);

    inteiro = (int) real;

    printf("valor em inteiro eh: %d\n", inteiro);

    return 0;
 }