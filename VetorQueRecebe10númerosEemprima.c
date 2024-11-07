/*Escrever um algoritmo que recebe como entrada 10 números
inteiros informados pelo usuá rios e os armazena em um vetor. Logo
após o seu algoritmo deverá imprimir os valores armazenados.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int vetor[10];
  int var=0;

  for(int i=0; i<10; i++){
    printf("Digite um numero:\n");
    scanf("%d",&var);
    vetor[i]=var;

}

    for(int j=0;j<10; j++){
    printf("%d ",vetor[j]);
}
    return 0;
}
