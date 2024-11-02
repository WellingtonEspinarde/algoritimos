/*Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é primo*/

#include <stdio.h>
#include <stdlib.h>
void primo(int num);

int main()
{

    int valor=0;
    do{
    printf("digite um numero e veja se ele eh primo ou 0 para sair\n");
    scanf("%d",&valor);
    primo(valor);
    }while(valor!=0);
     return 0;
}

void primo(int num){
    int divisivel=0;
    for(int i=2; i<num; i++){//percorre todos os numeros ate o numero digitado//
        if(num%i==0){ //testa divisao//
            divisivel++; // se for divisivel aumenta 1//
      }
    }
    if (divisivel==0 && num > 0){
        printf("%d eh primo!\n",num);
    }else{
        printf("%d NAO eh primo!\n",num);
    }
}
