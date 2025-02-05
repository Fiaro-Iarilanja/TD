//Ceci est un programme qui calcule et affiche la somme s=1/1+1/2+1/3...+1/N, ou N est saisi au clavier.

#include <stdio.h>

int main()
{
    int N,i;
    float somme,j;
    printf("Entrez N: ");
    scanf("%d",&N);
    somme=0;
    j=1;
    for(i=1;i<=N;i++)
    {
        somme+=(1/j);
        j++;
    }
    printf("La somme 1/1 jusqu'a 1/N= %f\n",somme);
    return (0);
}
