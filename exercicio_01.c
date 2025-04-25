/*
as variaveis int lado_a, lado_b e lado_c foram usadas para o usuario poder digitar os 3 lados do triangulo

o printf foi usado para mostrar as mensagens pedindo ao usuario que digite os valores dos lados

o scanf foi usado para o usuario digitar os valores de cada lado

o if principal foi usado para verificar se os 3 lados digitados podem realmente formar um triangulo
isso é feito usando a regra da desigualdade do triangulo (um lado precisa ser maior que a diferenca dos outros dois e menor que a soma deles)

se os lados puderem formar um triangulo, o programa mostra a mensagem "eh um triangulo"

o primeiro if dentro do teste do triangulo foi usado para verificar se todos os lados sao iguais, ou seja, se o triangulo é equilatero
o printf mostra essa informacao

o segundo if dentro do teste do triangulo foi usado para verificar se dois lados sao iguais e um diferente, ou seja, se o triangulo é isosceles
o printf mostra essa informacao

o terceiro if dentro do teste do triangulo foi usado para verificar se todos os lados sao diferentes, ou seja, se o triangulo é escaleno
o printf mostra essa informacao

se os lados nao puderem formar um triangulo, o programa mostra a mensagem "nao e triangulo"

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado_a;
    int lado_b;
    int lado_c;

    printf("digite o valor de a: ");
    scanf("%d", &lado_a);

    printf("digite o valor de b: ");
    scanf("%d", &lado_b);

    printf("digite o valor de c: ");
    scanf("%d", &lado_c);
    
    if ((((lado_a > abs(lado_b - lado_c)) && (lado_a<lado_b + lado_c)) && ((lado_b > abs(lado_c - lado_a))) && (lado_b<lado_c + lado_a)) && (((lado_c > abs(lado_a - lado_b)) && (lado_c<lado_a + lado_b)))) {
        printf("eh um triangulo ");

        if ((lado_a == lado_b) && (lado_b == lado_c)) {
            printf(" equilatero\n");
        }
        
        if ((((lado_a == lado_b) && (lado_b != lado_c)) || ((lado_b == lado_c) && (lado_c != lado_a))) || (((lado_c == lado_a) && (lado_a != lado_b)))) {
            printf(" isosceles\n");
        }
       
       if (((lado_a != lado_b) && (lado_b != lado_c)) && ((lado_c != lado_a))) {
        printf(" escaleno\n");
       }

    }
    else {
        printf("nao e triangulo");
    }
    return 0;

}