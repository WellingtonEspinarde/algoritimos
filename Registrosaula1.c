#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int ra;
    int numcurso;
};

int main()
{
    struct aluno a1;
    printf(" Digite o nome do aluno:\n");
    scanf ("%[^\n]",a1.nome);
    printf(" Digite o ra do aluno:\n");
    scanf ("%d",&a1.ra);
    printf(" Digite o numero do curso:\n");
    scanf ("%d",&a1.numcurso);

    printf("Aluno: %s\nRa: %d\nCurso: %d",a1.nome,a1.ra,a1.numcurso);

    return 0;
}
