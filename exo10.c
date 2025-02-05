//Ceci est un programme qui affiche les diviseurs d’un entier N à saisir au clavier.

#include <stdio.h>

int main()
{
    int N,i;
    printf("Entrez N: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            printf("%d ",i);
        }
    }
    return(0);
}