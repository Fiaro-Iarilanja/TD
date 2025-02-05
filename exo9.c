//Ceci est un programme qui affiche le nombre pair compris entre 1 et N où N est saisie au clavier.

#include <stdio.h>

int main()
{
    int N,i;
    printf("Entrez N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return(0);
}