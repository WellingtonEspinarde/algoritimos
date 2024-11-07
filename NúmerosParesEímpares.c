#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Escreva um programa que receba um número inteiro e determine se ele é par ou ímpar.*/

    int num;

    printf("digite um numero para saber se eh par ou impar:\n");
    scanf ("%d",&num);

    if (num%2==0){
        printf("o numero %d eh par", num);
    } else{
      printf("o numero %d eh impar", num);
    }

    return 0;
}
