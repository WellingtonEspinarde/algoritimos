/*Escreva um algoritmo que receba uma String do usuário e imprima as quatro
primeiras letras dessa String*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char recebe [20];

    printf("Digite uma palavra com ate 10 letras\n");
    scanf("%s",recebe);

    printf("As quatro primeiras letras sao: ");
    for(int i=0; i<4; i++){
       printf("%c",recebe[i]);
    }

    return 0;
}
