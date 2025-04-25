/*
as variaveis char genero e nome foram usadas para armazenar o genero e o nome do usuario

a variavel float altura foi usada para armazenar a altura do usuario em metros

a variavel int idade foi usada para armazenar a idade do usuario

o printf foi usado para mostrar a mensagem pedindo que o usuario digite seu nome
o scanf foi usado para o usuario digitar seu nome (a variavel nome armazena até 30 caracteres)

o printf foi usado para mostrar a mensagem pedindo que o usuario digite seu genero (m para masculino e f para feminino)
o scanf foi usado para o usuario digitar o genero (o " " antes do %c garante que o caractere seja lido corretamente)

o printf foi usado para mostrar a mensagem pedindo que o usuario digite sua altura
o scanf foi usado para o usuario digitar sua altura em metros (por exemplo, 1.75)

o printf foi usado para mostrar a mensagem pedindo que o usuario digite sua idade
o scanf foi usado para o usuario digitar sua idade em anos (um numero inteiro)

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
int main(){
    char genero;
    float altura;
    char nome[30];
    int idade;
    printf("digite seu nome: ");
    scanf("%s", &nome);

    printf("digite seu genero(m/f): ");
    scanf(" %c", &genero);

    printf("digite sua altura(em metros): ");
    scanf("%f", &altura);

    printf("digite sua idade: ");
    scanf("%d", &idade);

return 0;
}