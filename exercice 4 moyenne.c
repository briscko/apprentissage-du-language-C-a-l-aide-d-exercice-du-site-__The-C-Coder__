/*
Exercice 5: Ecrire un programme C qui lit en entrée trois entiers et affiche 
leur moyenne avec une précision de deux chiffres après la virgule.
*/

#include <stdio.h>

int main()
{
    int note1,note2, note3 = 0;
    float moyenne =0;
  
   

printf("entrez votre première note :\n");
scanf("%d",&note1);
printf("entrez votre seconde note :\n");
scanf("%d",&note2);
printf("entrez votre troisieme note :\n");
scanf("%d",&note3);
moyenne = (note1+note2+note3)/3 ;
printf("votre moyenne est de : %.2f\n", moyenne);
moyenne = (note1+note2+note3)/3.0 ;

printf("votre moyenne est de : %f\n", moyenne);


}