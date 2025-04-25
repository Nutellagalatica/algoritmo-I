/*
a variavel char nome foi usada para armazenar o nome do usuario
essa variavel pode guardar até 30 caracteres (o nome do usuário)

o printf foi usado para mostrar a mensagem pedindo ao usuário que digite seu nome

o scanf foi usado para o usuário digitar seu nome, que será armazenado na variavel nome
o "%s" indica que o usuário deve digitar uma sequência de caracteres (o nome)

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
int main(){
    char nome[30];
    printf("digite seu nome: ");
    scanf("%s", &nome);
    return 0;
}