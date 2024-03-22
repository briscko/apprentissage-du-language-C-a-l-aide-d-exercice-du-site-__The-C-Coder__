#include <stdio.h>

/*
    écrire iun programme en C qui permet de lire en entrée un entier constitué de trois chiffres et d afficher 
    celui ci inversé. (exemple : si l'entrée est 123, on affiche 321.)
*/
int main()
{
    int nombre = 0;
    int nombre_inverser = 0;
    int calcul = 0;

    printf("Veuillez entrer un nombre compris entre 100 et 999.\n");
    scanf("%d", &nombre);
    if(nombre<100 || nombre>999)
    {
        printf("nombre incorrect pour la convertion.\n");
        return 0;
    }
    else
    {
      
            calcul = nombre % 10;

            printf("%d", calcul);
            calcul = nombre / 10;
            calcul = calcul % 10; 
             printf("%d", calcul);
            calcul = nombre / 100;
          printf("%d\n", calcul);
     

       }
    

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

/*

correction:

Tout d'abord on va commencer par la déclaration des variables dont on aura besoin dans ce programme(ligne 5).
la déclaration des  varriables en C se fait obligatoirementau début de programme juste après le int main .
trois variables de types int seront largement suffisantes popur réaliser ce programme :

-la variable A : cette variable ca contenir le nombre entré par l'utilisateur.

-la variable C : celle-ci va contenir elle aussi l'entier entre, afin de le conserver pour l'affichage final,
puisque le contenu de la variable A sera altéré comme on le verra plus tard.

-la variable B : va abriter le nombre inversé.


après la declaration des variables, on affiche à l'aide de la fonction printf un message ou on demande 
à l'utilisateur d'entrer un entier composé de trois chiffres(ligne 6). 

et la fonction scanf définie dans la bibliothèque stdio.h on va lire ce dernier vers la variable entière A.
pour ce faire on utilisera le format %d résérvé au type int(ligne 7)

avant de ce lancer dans l'inversion du nombre contenu dans la variable A, on va conserver la valeur
initiale de A dans la variable C via une simple operation d'affectation (ligne8). 

pour inverser l'entier A on doit pouvoir accéder a ses différents chiffres un par un .ceci est 
possible grace aux deux opérateur% et /.

la quantité A%10 (ligne 9) représente le chiffre des unités de A (exemple: 234%10=4).
à titre de rappel l'opérateyr % appelé modulo représente le reste de la division entière
 de la premiere opérande sur la deuxieme. en multipliant maintenant le chiffre 
 des unités ainsi obtenu par cent, on le fera alors passer à la 3ème position. 
 Ex: b = (234%10)*100 = 4*100 = 400.
En suivant la même approche, on pourra constituer le deuxième chiffre du nombre inversé. Mais tout d’abord 
il faudra accéder au deuxième chiffre de a.

Le chiffre des unités de a n’étant plus utile, on peut s’en débarrasser en divisant a par dix (ligne 10). Ex: 234/10 = 23. A ce stade on peut récupérer le nouveau chiffre des unités de a qu’on doit multiplier ensuite par dix pour le faire passer à la deuxième position. Ex: (23%10)*10 = 3*10 = 30.

Ce qu’il faut faire maintenant, est de faire la somme des deux nombres obtenus dans ces deux premières étapes pour constituer le chiffre des centaines et celui des dizaines de b. Ex: 400+30 = 430. Il faut noter que dans le code, l’obtention du chiffre des dizaines et l’addition sont faites dans une seule instruction (ligne 11).

La constitution du chiffre des unités de b se basera sur les mêmes principes précédents (lignes 12-13).

Reste à signaler que a/=10 et b+=a sont des manières abrégées d’écrire a=a/10 et b=b+a.

Finalement et lors de l’affichage, la variable c qui représente le nombre lu en entrée sera affichée à la place du premier %d de la fonction printf et le second %d sera substitué par la valeur de b (ligne 14).


------------------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("donnez un entier de 3 chiffres\n");
    scanf("%d",&a);
    c=a;
    b=(a%10)*100;
    a=a/10;
    b=b+(a%10)*10;
    a/=10;
    b+=a;
    printf("le nombre %d inverse est %d\n",c,b);
    system("pause");
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
    int nombre = 0;
    int nombre_inverser = 0;
    int calcul = 0;

    printf("Veuillez entrer un nombre compris entre 100 et 999.\n");
    scanf("%d", &nombre);
    if(nombre<100 || nombre>999)
    {
        printf("nombre incorrect pour la convertion.\n");
        return 0;
    }
    else
    {
      
            calcul = nombre % 10;

            printf("%d", calcul);
            calcul = nombre / 10;
            calcul = calcul % 10; 
             printf("%d", calcul);
            calcul = nombre / 100;
          printf("%d\n", calcul);
     

       }
    

    return 0;
}

*/