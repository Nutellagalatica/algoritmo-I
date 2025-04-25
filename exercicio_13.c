/*
as variáveis int dia_nacimento, mes_nacimento, ano_nacimento, dia_atual, mes_atual, ano_atual, idade_anos e idade_meses são usadas para armazenar os dados de nascimento e data atual, bem como os cálculos da idade

o printf foi usado para mostrar a mensagem pedindo que o usuário digite a data de nascimento

o scanf foi usado para o usuário digitar o dia, mês e ano de seu nascimento, que são armazenados nas variáveis dia_nacimento, mes_nacimento e ano_nacimento, respectivamente

o printf foi usado para mostrar a mensagem pedindo que o usuário digite a data atual

o scanf foi usado para o usuário digitar o dia, mês e ano da data atual, que são armazenados nas variáveis dia_atual, mes_atual e ano_atual

a variável idade_anos foi calculada subtraindo o ano de nascimento do ano atual, obtendo a diferença em anos

a variável idade_meses foi calculada multiplicando a idade em anos por 12 (para converter anos em meses) e somando a diferença dos meses entre a data atual e a data de nascimento

o if foi usado para verificar se o dia atual é maior que o dia de nascimento, o que indica que a pessoa já completou o mês de nascimento. Nesse caso, subtrai-se 1 do total de meses calculados, corrigindo a idade em meses

o printf foi usado para mostrar a idade do usuário em meses, com o valor calculado da variável idade_meses

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>

int main(){

int dia_nacimento;
int mes_nacimento;
int ano_nacimento;

int dia_atual;
int mes_atual;
int ano_atual;

int idade_anos;
int idade_meses;

printf("Digite sua data de nascimento:\n");
printf("Dia: ");
scanf("%d", &dia_nacimento);

printf("Mês: ");
scanf("%d", &mes_nacimento);

printf("Ano: ");
scanf("%d", &ano_nacimento);

printf("Digite a data atual:\n");
printf("Dia: ");
scanf("%d", &dia_atual);

printf("Mês: ");
scanf("%d", &mes_atual);

printf("Ano: ");
scanf("%d", &ano_atual);

idade_anos = ano_atual - ano_nacimento;

idade_meses = idade_anos * 12 + (mes_atual - mes_nacimento);

if(dia_atual > dia_nacimento){
    idade_meses --;
}

printf("sua idade aproximadamente em meses e: %d \n", idade_meses);

return 0;
}