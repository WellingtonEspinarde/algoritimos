#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char vet[20];
    int con=0,vog=0,i=0;

    printf("digite uma palalvra:\n");
    gets(vet);
    fflush(stdin);

    i=strlen(vet);


    for(int i=0;i<vet[i];i++){

    switch(vet[i]){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    vog++;
    break;
default:
    con++;
    }
}

    printf("o total de vogais eh: %d\n",vog);
    printf("o total de consoantes eh: %d\n",con);
    printf("o total de letras eh: %d",i);

    return 0;
}
