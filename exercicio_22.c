/*As variáveis R1, R2 e Req são usadas para armazenar os valores dos resistores e a resistência equivalente.

R1 é o valor do primeiro resistor em ohms.

R2 é o valor do segundo resistor em ohms.

Req é a resistência equivalente resultante da conexão dos resistores em paralelo.

O printf foi usado para exibir uma mensagem pedindo que o usuário digite o valor do primeiro resistor.

O scanf foi usado para capturar o valor digitado pelo usuário e armazená-lo na variável R1.

O printf foi usado novamente para exibir a mensagem pedindo que o usuário digite o valor do segundo resistor.

O scanf foi usado para capturar o valor do segundo resistor e armazená-lo na variável R2.

A fórmula utilizada para calcular a resistência equivalente (Req) dos resistores em paralelo é:
Req=R1×R2R1+R2
Req​=R1​+R2​R1​×R2​​

Onde R1 e R2 são os valores dos dois resistores.

O cálculo é realizado e o valor de Req é armazenado na variável Req.

O printf é usado para exibir o resultado, mostrando a resistência equivalente (Req) dos dois resistores em paralelo.

O return 0 e usado para fazer o programa terminar após exibir o resultado. 
*/
#include <stdio.h>
int main(){
    float R1;
    float R2;
    float Req;

    printf("coloque o primeio resistor: ");

    scanf("%f", &R1);

    printf("coloque o segundo resistor: ");

    scanf("%f", &R2);
    
    Req= Req = (R1 * R2) / (R1 + R2);

    printf("A resistência equivalente (Req) dos resistores em paralelo é: %f ohms\n", Req); 
}