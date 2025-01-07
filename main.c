#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[5];
    int maior=0,menor=0,i;
    int maior1,menor1;

    for(int i=0;i<5; i++){
        printf("[%d]=",i);
        scanf("%d",&vet[i]);
        if(vet[i]>vet[maior]){
            maior=i;
        }
        if(vet[i]<vet[menor]){
            menor=i;
        }
        if(vet[i]>maior1){
            maior1=vet[i];
        }
        if(vet[i]<menor1){
            menor1=vet[i];
        }

    }

    printf("a posicao com o maior numero eh:%d e o numero dentro eh:%d\n",maior,maior1);
    printf("a posicao com o menor numero eh:%d e o numero dentro eh:%d",menor,menor1);



    return 0;
}
