/*Escreva um algoritmo em C que recebe como entrada 10 números
inteiros informados pelo usuá rios e os armazena-os em um vetor.
Depois, o seu algoritmo deve calcular a soma e a média dos
números armazenados. Ao final, o seu algoritmo deve imprimir o
vetor, a soma e a média de seus elementos*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor[10];
    int soma=0, media=0;

    for(int i=0;i<10;i++){
        printf("digite um valor inteiro para a posicao %d \n",i);
        scanf("%d",&vetor[i]);

         soma+=vetor[i];
    }

        media=soma/10;
        printf("o valor da soma %d e o valor da media e %d\n",soma,media);

        for(int i=0; i<9; i++){
            printf("%d ",vetor[i]);
        }

    return 0;
}
