/*
a variavel char genero foi usada para o usuario digitar seu genero (m para masculino e f para feminino)

a variavel float altura foi usada para o usuario digitar sua altura em metros (por exemplo, 1.75)

o printf foi usado para mostrar a mensagem pedindo que o usuario digite seu genero

o scanf foi usado para o usuario digitar seu genero

o printf foi usado para mostrar a mensagem pedindo que o usuario digite sua altura

o scanf foi usado para o usuario digitar sua altura

o primeiro if foi usado para verificar se o genero digitado foi masculino (m ou M)

dentro desse if, outro if foi usado para comparar a altura com a media nacional para homens (1.75 metros)
se for maior ou igual, o printf mostra que a altura esta acima da media
caso contrario, mostra que esta abaixo da media

o segundo if foi usado para verificar se o genero digitado foi feminino (f ou F)
(porem esse if tem um erro por causa de um ponto e virgula depois dele, o que faz com que a condicao nao funcione corretamente)

independente da condicao, o programa compara a altura com a media feminina (1.62 metros)
e mostra com o printf se a altura esta acima ou abaixo da media

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
int main(){
    char genero;
    float altura;
    printf("digite seu genero: ");
    scanf("%c", &genero);
    printf("digite sua altura: ");
    scanf("%f", &altura);
        if(genero == 'm' || genero == 'M'){
            if(altura >=1.75){
                printf("sua altura eh maior que a media nacional \n");
            }
            else{
                printf("sua altura eh menor que a media nacional \n");
            }
        }
        if(genero == 'f' || genero == 'F' );
        if(altura >= 1.62){
            printf("sua altura eh maior que a media nacional \n");
        }
        else{
            printf("sua altura eh menor que a media nacional \n");
        }
        return 0;

}
