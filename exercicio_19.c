/*
as variáveis float numero1 e numero2 são usadas para armazenar números decimais (com casas decimais)

a variável int resultado é usada para armazenar o resultado de uma operação matemática, mas está sendo tratada como um número inteiro, o que pode gerar problemas na operação, já que número1 e numero2 são números decimais

o printf foi usado para pedir ao usuário que digite o primeiro número

o scanf foi usado para capturar o primeiro número digitado pelo usuário e armazená-lo na variável numero1

o printf foi usado novamente para pedir ao usuário que digite o segundo número

o scanf foi usado para capturar o segundo número digitado pelo usuário e armazená-lo na variável numero2

há um erro no código: a variável `resultado` é usada antes de ser inicializada, o que pode gerar um comportamento inesperado. A verificação `if(resultado != 0)` é feita sem que `resultado` tenha sido atribuído a nenhum valor até esse momento. 

no corpo do `if`, o código tenta multiplicar os dois números (numero1 e numero2) e armazena o valor na variável `resultado`. No entanto, o tipo de `resultado` é `int`, o que pode causar problemas se o resultado da multiplicação não for um número inteiro.

o printf tenta exibir o valor de `resultado`, mas usa o especificador `%d` (para inteiros), enquanto `numero1` e `numero2` são números com casas decimais, então seria melhor usar `%f` para exibir números decimais.

no else, há um erro de sintaxe. O `printf` possui uma vírgula no final da mensagem, o que não é correto. Além disso, a lógica do `else` não faz muito sentido, pois ele está tentando imprimir uma mensagem de erro se o `resultado` for 0, mas isso não acontece antes da multiplicação.

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
 int main(){
    float numero1 ;
    float numero2 ;
    int resultado;

    printf("coloque o primeio numero: ");
    scanf("%f", &numero1);

    printf("coloque o segundo numero: ");
    scanf("%f", &numero2);

    if(resultado != 0){
        resultado = numero1 * numero2;
        printf("o resultado da divisao em inteiro:%d \n", resultado);
    }else{
        printf("erro:o resultado da soma nao e inteiro"), resultado;
    }
    
    return 0;
 }