/*Faça um programa que receba como entrada 10 valores reais, coloque-os em um
vetor e depois e apresente os números na ordem inversa da entrada*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    for(int i=0; i<10; i++){
        printf("digite um numero:\n");
        scanf("%d",&vetor[i]);
    }

    for(int i=9; i>=0; i--){
        printf("%d ",vetor[i]);
    }

    return 0;
}
