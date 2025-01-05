#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas [3];
    float soma=0, media;

    for(int i=0; i<3; i++){
        printf("digite sua nota:\n");
        scanf("%f",&notas[i]);
        soma+=notas[i];
    }

    media=soma/3;

    printf("notas:\n");
    for(int i=0; i<3; i++){
        printf("%2.f ",notas[i]);
    }
    printf("\na soma das notas sao:%2.f\n",soma);
    printf("sua media eh:%2.f\n",media);

    if(media>=6){
        printf("aprovado");
    }else if(media>=3 && media<=5){
        printf("recuperacao");
    }else{
    printf("reprovado");
    }

    return 0;
}
