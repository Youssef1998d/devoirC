#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

int main()
{   int nbr;

    printf("Entrer le nbr des etudiants : ");
    scanf("%d", &nbr);              //Pour lire le nombre des etudiants : Question n°4)a)

    Etudiant tabEtu[nbr];           //La table ou va enregistrer les etudiants : Question n°4)b)
    for (int i=0; i<nbr;i++){
        setEtudiant(&tabEtu[i]);
    }                               //Enregistrements des etudiants est faite   : Question n°4)b)
    for (int i=0;i<nbr;i++){
        if ((tabEtu[i].dateNais.jj+tabEtu[i].dateNais.mm*100+tabEtu[i].dateNais.aa*10000)>=19900101){
            affEt(tabEtu[i]);
        }
    }                               //affichage des etudiants dont leurs date de naissance > 01/01/1990 : Question n°4)c)
    return 0;
}
