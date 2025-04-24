/*
a variavel int numero foi usada para o usuario poder escolher uma das opcoes  
o printf foi usado para mostrar como sera o cardapio 
o printf foi usado para mostrar como sera as opcoes que podem ser escolhidas
o scanf foi usado para o usuario poder igitar qual opcao ele escolheu
o primeiro if foi usado para determinar se o usuario escolheu esta opcao 
o printf foi usado para mostrar a opcao escolhida pelo usuario
o segundo if foi usado para determinar se o usuario escolheu esta opcao
o printf foi usado para mostrar a opcao escolhida pelo usuario
o terceiro if foi usado para determinar se o usuario escolheu esta opcao
o printf foi usado para mostrar a opcao escolhida pelo usuario
o quarto if foi usado para determinar se o usuario escolheu esta opcao
o printf foi usado para mostrar a opcao escolhida pelo usuario
o quinto if foi usado para determinar se o usuario escolheu esta opcao
o printf foi usado para mostrar a opcao escolhida pelo usuario
o sexto if foi usado para caso o usuario digite um numero invalido parar o codigo
o printf foi usado caso o numero digitado pelo usuario esta invalido
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
