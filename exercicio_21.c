/*As variáveis numero, divisor e resto são usadas para armazenar números inteiros.

numero é o número que o usuário quer dividir.

divisor é o número pelo qual o numero será dividido.

resto é o valor que sobra após realizar a divisão (chamado de "resto da divisão").

O printf foi usado para exibir na tela a mensagem pedindo que o usuário digite o número.

O scanf foi usado para capturar o número digitado pelo usuário e armazená-lo na variável numero.

O printf foi usado novamente para exibir a mensagem pedindo que o usuário digite o divisor.

O scanf foi usado para capturar o divisor e armazená-lo na variável divisor.

A variável resto recebe o resultado da operação numero % divisor. O operador % é o operador de módulo, que calcula o resto de uma divisão. Por exemplo, se numero for 10 e divisor for 3, o resto será 1, porque 10 dividido por 3 dá 3 (com resto 1).

A instrução if verifica se o resto da divisão é par ou ímpar. Se o resto for divisível por 2 (ou seja, se resto % 2 == 0), ele é par.

Se o resto for par, o programa exibe a mensagem "O resto desta divisao e par". Caso contrário (se for ímpar), ele exibe "O resto desta divisao e impar".

o return 0 indica que o programa terminou corretamente.
*/

#include <stdio.h>
int main(){
    int numero;
    int divisor;
    int resto;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("digite um divisor: ");
    scanf("%d", &divisor);

    resto = numero % divisor;

    if(resto % 2 == 0){
    printf("O resto desta divisao e impar \n");
} else{
    printf("O resto desta divisao e par \n");
}

    return 0;
}