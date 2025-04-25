/*
as variáveis float n1 e n2 são usadas para armazenar números decimais (com casas decimais) e a variáveis char a, b, c, d, e são usadas para armazenar caracteres individuais

n1 é atribuído com o valor 1.69 e n2 com o valor 1.96, que representam duas alturas (ou outros valores decimais)

as variáveis de caracteres (a, b, c, d, e) são usadas para formar o nome "Luisb", atribuindo-se a cada uma delas uma letra do nome:

- a recebe 'L'
- b recebe 'u'
- c recebe 'i'
- d recebe 'z'
- e recebe 'b'

o printf é usado para exibir o valor das variáveis n1 e n2, mostrando-os na tela. O especificador "%f" indica que o valor será impresso como um número decimal

o printf também é usado para exibir o nome formado pelas letras armazenadas nas variáveis a, b, c, d e e. O especificador "%c" indica que cada caractere será impresso na tela

o return 0 foi usado para indicar que o programa terminou corretamente
*/
#include <stdio.h>
int main(){
    float n1;
    float n2;
    char a;
    char b ;
    char c;
    char d;
    char e;
     n1 = 1.69;
     n2 = 1.96;
     a = 'L';
     b = 'u';
     c = 'i' ;
     d = 'z';
     e = 'b';
     printf("valor de n1 %f \n", n1);
     printf("valor de n2 %f \n", n2);
     printf("Nome: %c%c%c%c%c\n", a, b, c, d, e);
return 0;
}