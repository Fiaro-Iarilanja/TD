//Ceci est un programme qui lit deux entiers et affiche s’ils sont premiers entre eux ou non.

#include <stdio.h>

int main()
{
    int a,b,r,dvd,dvs,pgcd;
    printf("Entrez a: ");
    scanf("%d",&a);
    printf("Entrez b: ");
    scanf("%d",&b);
    if(a>b)
    {
        dvd=a;
        dvs=b;
    }
    else
    {
        dvd=b;
        dvs=a;
    }
    do
    {
        r=dvd%dvs;
        dvd=dvs;
        dvs=r;
    } while(r!=0);
    pgcd=dvd;
    if(pgcd==1)
    {
        printf("%d et %d sont premiers entre eux\n",a,b);
    }
    else
    {
        printf("%d et %d ne sont pas premiers entre eux\n",a,b);
    }
    return (0);
}