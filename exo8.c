//Ceci est un programme qui affiche 1 jusqu’à N où N est une valeur saisie en clavier.

#include <stdio.h>

int main()
{
    int N,i;
    printf("Entrez N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    return (0);
}