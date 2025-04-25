/*
as variaveis int numero, divisor e resultado foram usadas para armazenar, respectivamente, o número que o usuário vai digitar, o divisor e o resultado da divisão

o printf foi usado para mostrar a mensagem pedindo que o usuário digite o primeiro número
o scanf foi usado para o usuário digitar esse número, que será armazenado na variavel numero

o printf foi usado para mostrar a mensagem pedindo que o usuário digite o segundo número (o divisor)
o scanf foi usado para o usuário digitar esse número, que será armazenado na variavel divisor

o if foi usado para verificar se o resultado da divisão será diferente de 0
(essa verificação não está correta no código, pois a variável "resultado" não foi inicializada antes de ser usada, o que pode causar um erro)

se o resultado da divisão for diferente de 0, a operação de divisão é feita e o resultado é armazenado na variável resultado
o printf mostra o resultado da divisão inteira

caso contrário, o else deveria ser utilizado para mostrar uma mensagem de erro, mas o código está incorreto e não está tratando a verificação de forma adequada (isso deve ser corrigido para tratar erro de divisão por 0)

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
 int main(){
    int numero ;
    int divisor ;
    int resultado;

    printf("coloque o primeio numero: ");
    scanf("%d", &numero);

    printf("coloque o segundo numero: ");
    scanf("%d", &divisor);

    if(resultado != 0){
        resultado = numero / divisor;
        printf("o resultado da divisao em inteiro:%d \n", resultado);
    }else{
        printf("erro:o resultado da soma nao e inteiro"), resultado;
    }
    
    return 0;
 }