/*
écrire un programme C qui permet de permuter le contenu de deux variables 
entières en passant par une troisième variable auxiliaire.
 Ceci et en affichant les deux variables avant et après permutation

*/

//-----------------------------------------------------------------------------


#include <stdio.h>

int main()
{
 int nb1, nb2, nb3 =0;   
 printf("choississez un premier nombre;\n");
 scanf("%d", &nb1);
 printf("choississez un second nombre;\n");
 scanf("%d", &nb2);
 printf("%d et %d deviennent :", nb1 , nb2);
 nb3 = nb1;
 nb1 = nb2;
 nb2 = nb3;
 printf("%d et %d \n", nb1 , nb2);


    return 0;
}

//---------------------------------------------------------------------------

permuter le contenu de deux variables en utilisant une variable
 auxiliaire est similaire au fait d’interchanger les contenus de deux verres, 
 un rempli d’eau et l’autre avec de l’huile. Il est évident qu’il faut passer 
par un troisième verre vide.
Soient a et b les deux variables dont on veut inverser le contenu.
 Et soit tmp la variable auxiliaire qui va aider à faire ceci. 
 Cette dernière variable joue le rôle du verre vide dans l’analogie précédente.

La déclaration des variables et la lecture des entrées doit pour l’instant 
être à la portée. Donc on ne va s’intéresser qu’à la partie essentielle du 
programme, à savoir celle qui effectue la permutation (lignes 9-11). Et on va 
travailler sur l’exemple suivant pour bien en comprendre le fonctionnement:
Soit a = 12 et b = 34 les valeurs entrées par l’utilisateur.
 On commence par sauvegarde le contenu de la variable a dans tmp (ligne 9). 
 Le statut des trois variables est alors: tmp = 12, a = 12 et b = 34.

La deuxième étape consiste à mettre le contenu de la variable b dans a (ligne 10).
 Le statut des variables à ce stade devient: tmp = 12 , a = 34 et b = 34. 
 Et c’est là que le rôle de la variable auxiliaire tmp devient important,
  puisque sans elle la valeur initiale de a sera perdue.

La troisième et dernière étape consiste à récupérer le contenu
 de tmp dans b (ligne 11). Le statut final des variables est donc:
  tmp = 12, a = 34 et b = 12. Et il est claire qu’on a bien réussi à permuter 
  les contenus des deux variables a et b.

Pour s’assurer de la réussite de la tâche, les deux variables a et b ont été
 affichées avant la permutation (ligne 8) et puis après la permutation (ligne 12).


//---------------------------------------------------------------------------
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,tmp;
    printf("Entrez deux entiers a et b:\n");
    scanf("%d%d",&a,&b);
    printf("Avant permutation: a = %d et b = %d.\n",a,b);
    tmp=a;
    a=b;
    b=tmp;
    printf("Apres permutation: a = %d et b = %d.\n",a,b);
    system("pause");
    return 0;
}
*/