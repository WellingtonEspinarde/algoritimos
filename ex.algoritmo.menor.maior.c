/*Escreva um algoritmo que recebe vários números inteiros do
usuário e verifica quem é o maior número e quem é o menor. Nesse
caso, a quantidade de números a serem informados é
desconhecida. O seu algoritmo deve finalizar quando o usuário
digitar o número zero, que não deve entrar no conjunto dos*/
números a serem analisados.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{   int num_digitado, maior, menor;
    bool passou = true;
    //Parar quando digitar 0
    do{
        printf("Digite um numero ou digite 0 para encerrar.\n");
        scanf("%d",&num_digitado);
        if (passou){ //so passa na primeira rodada
            maior = num_digitado;
            menor = num_digitado;
            passou = false;
        }

        if (num_digitado == 0){
            printf ("Encerrano a leitura...\n");
        }else{

        if(num_digitado < menor){
            menor = num_digitado;
        }

        if(num_digitado > maior){
            maior = num_digitado;
        }
    }
    }while(num_digitado!=0);
    printf ("O menor valor digitado eh %d \nO maior valor eh %d", menor, maior);

    return 0;
}
