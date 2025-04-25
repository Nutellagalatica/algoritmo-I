/*
a variavel int numero foi usada para armazenar a opção que o usuário escolherá do cardápio

o printf foi usado para exibir o cardápio com as opções de comida (linguiça, queijo, carne, cupim, picanha)

o printf foi usado para mostrar a mensagem pedindo ao usuário que escolha uma das opções do cardápio

o scanf foi usado para o usuário digitar a opção desejada, que será armazenada na variável numero

o primeiro if foi usado para verificar se o usuário escolheu a opção 1 (linguiça)
se sim, o printf vai mostrar a mensagem "tu quer linguica"

o segundo if foi usado para verificar se o usuário escolheu a opção 2 (queijo)
se sim, o printf vai mostrar a mensagem "tu quer queijo"

o terceiro if foi usado para verificar se o usuário escolheu a opção 3 (carne)
se sim, o printf vai mostrar a mensagem "tu quer carne"

o quarto if foi usado para verificar se o usuário escolheu a opção 4 (cupim)
se sim, o printf vai mostrar a mensagem "tu quer cupim"

o quinto if foi usado para verificar se o usuário escolheu a opção 5 (picanha)
se sim, o printf vai mostrar a mensagem "tu quer picanha"

o sexto if foi usado para verificar se o número digitado não está entre 1 e 5
caso o número seja inválido, o printf vai mostrar a mensagem "essa opcao esta indisponivel"

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
int main(){
    int numero;
    
    printf("            cardapio            \n 1-linguica \n 2-queijo \n 3-carne \n 4-cupim \n 5-picanha \n");
    printf("escolha uma das opcoes: ");
    scanf("%d", &numero);

    if (numero == 1){
        printf ("tu quer linguica \n");
    }
    if (numero == 2){
        printf("tu quer queijo \n");
    }
    if (numero == 3){
        printf("tu que carne \n");
    }
    if (numero == 4){
        printf("tu quer cupim \n");
    }
    if (numero == 5){
        printf("tu quer picanha \n");
    }
    if(numero != 1 && numero != 2 && numero != 3 && numero != 4 && numero != 5){
        printf("essa opcao esta indisponivel \n");
    }
    return 0;
    }
