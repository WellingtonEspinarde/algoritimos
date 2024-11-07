
/*Desenvolva um programa que leia 5 notas de alunos, armazene-as em um
array e calcule a média dessas notas. Exiba a média ao final.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   float notas[5],media=0,soma=0;
   int i;

   for(i=0; i<5; i++){
    printf("digite sua nota:\n");
    scanf ("%f",&notas[i]);
    soma+=notas[i];
   }
   media=soma/5;

   printf("A media da suas notas eh: %f",media);

    return 0;
}
