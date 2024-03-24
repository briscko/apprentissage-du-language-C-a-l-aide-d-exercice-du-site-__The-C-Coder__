/*
écrire un programme en C qui permet de lire deux nombres réels, et d'afficher 
ensuite leur produit,avec une précision de trois chiffres apres la virgule.
*/

//-----------------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main()
{
float NombreUn =0.;
float NombreDeux =0.;
float resultat =0.;

 printf("entrez un premier nombre\n");
 scanf("%f",&NombreUn);
  printf("entrez un second nombre\n");
  scanf("%f", &NombreDeux);
  resultat = NombreUn * NombreDeux;
  printf("%0.3f X %.3f = %.3f", NombreUn ,NombreDeux ,resultat);


    return 0;
}


//-----------------------------------------------------------------------------------------------------------------

/*
dans cette exercice on veut écrire un programme qui calcule le produit de deux
réel. la première chose à faire est la déclaration des variables dont on aura besoin. 
trois variablesX,Y et P seront donc déclaréede type float(ligne 5).
un message ensuite affiché à travers la fonction printf demandant à l'utilisateur
de saisir les deux nombres(ligne 6).ces deux réels vont etre lus vers les deux 
variables X et Y à l'aide de la fonction scanf (ligne 7). et on peut remarquer par cette
occasion l'indication du%f,qui représente le format dédié au type float.
par la suite on affecte åa la variable P la valeur du produit de X et Y,
calculé en utilisant l'operateur *(ligne 8).
pour affichr le résultat, un %f est utilisé avec la fonction printf, et 
qui impose d'afficher le contenu d'une variable de type float correspondante,
qui est ici P, avec une précision de 3 chiffres après la virgule(ligne 9).
il est a signaler qu'une opération d'arrondi peut avoir lieu.

*/

//-----------------------------------------------------------------------------------------------------------------

/*  solution :

#include<stdio.h>
#include<stdlib.h>

int main()
{

    float X, Y , P;
    printf("entrez deux reels;\n");
    scanf("%f%f", &X&Y);

    P=X*Y;
    printf("le produit de %f et %f est: %.3f\n",X, Y, P);
    return 0;
}

*/
