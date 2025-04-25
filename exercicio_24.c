/*
O programa começa declarando as variáveis:

idade: Armazena a idade da pessoa.

genero: Armazena o gênero da pessoa (masculino ou feminino).

nacionalidade: Armazena a sigla da nacionalidade da pessoa (por exemplo, "BR" para Brasil, "SP" para São Paulo).

deficiencia: Armazena a informação sobre a deficiência grave da pessoa (se tem ou não).

O printf foi usado para exibir uma mensagem pedindo ao usuário para digitar a sua idade.

O scanf foi usado para capturar o valor digitado pelo usuário e armazená-lo na variável idade.

O printf foi usado novamente para pedir ao usuário que digite seu gênero (m para masculino, f para feminino).

O scanf foi usado para capturar o gênero digitado pelo usuário e armazená-lo na variável genero.

O printf foi usado para pedir a sigla da nacionalidade da pessoa (por exemplo, "SP" para São Paulo ou "BR" para Brasil).

O scanf foi usado para capturar o valor da nacionalidade e armazená-lo na variável nacionalidade.

O printf foi usado para perguntar ao usuário se ele possui alguma deficiência grave. O usuário deve responder com 's' para sim ou 'n' para não.

O scanf foi usado para capturar a resposta sobre a deficiência grave e armazená-la na variável deficiencia.

O if foi utilizado para verificar se o usuário respondeu 's' (sim) para deficiência grave. Caso sim, o programa informa que ele não está qualificado para o alistamento obrigatório devido à deficiência.

Caso o usuário não tenha deficiência grave (else if), o programa verifica se a pessoa tem 18 anos ou mais. Se a idade for igual ou superior a 18 anos, o programa informa que a pessoa está apta para o alistamento obrigatório.

Se nenhuma das condições anteriores for verdadeira (se a idade for menor que 18 anos), o programa informa que a pessoa não está qualificada para o alistamento obrigatório devido à idade.
*/
#include <stdio.h>
int main(){
    int idade;
    char genero;
    char nacionalidade[5];
    char deficiencia; 

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("digite seu genero (m ou f): ");
    scanf(" %c", &genero);
    
    printf("digite sua nacionalidade (ex: sp): ");
    scanf("%s", nacionalidade);

    printf("voce possui alguma deficiencia grave? (s ou n) ");
    scanf(" %c", &deficiencia);

    if(deficiencia == 's'){
        printf("voce nao esta qualificado para o alistamento obrigatorio devido a deficiencia \n");
    } else if (idade >= 18) {
        printf("voce esta apto para o alistamento obrigatorio \n ");
    }  
    else{
        printf("voce nao esta qualificado para o alistamento obrigatorio devido a sua idade (menor de 18 anos) \n");
    }
    
    return 0; 
}