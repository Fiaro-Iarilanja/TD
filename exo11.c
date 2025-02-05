//Ceci est un programme qui calcule et affiche le factoriel de N à saisir au clavier.

#include <stdio.h>

int main()
{
    int N,i,factorielle;
    printf("Entrez N: ");
    scanf("%d",&N);
    factorielle=1;
    for(i=N;i>1;i--)
    {
        factorielle*=i;
    }
    printf("Le factorielle de %d est: %d\n",N,factorielle);
}