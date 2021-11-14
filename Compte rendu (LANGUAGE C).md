
#Présentation du langage C

Le C est un langage de programmation très utilisé pour créer des logiciels même si il est maintenant remplacé par son successeur, le C++. C'est un langage de haut niveau, c'est à dire qu'il est proche du programmeur (à la différence d'un langage de bas niveau comme l'assembleur qui est proche de l'ordinateur Smiley).

-Les programmes en C fonctionnent avec des fonctions. La principale est main().

##L'inclusion d'une bibliothèque externe se fait comme ceci :
  #include <stdlib.h>

La fonction la plus utilisée est printf() qui permet d'afficher du texte.


#Les variables

 Pour déclarer une variable, il faut le faire au début du programme et préciser son type :

-int
-char
-float
-double
-long
   Exemple: float variable = 3.5f ;

   + CHAR TYPE => CHAR, SIGNED CHAR, UNSIGNED CHAR.
   + INT TYPE => INT, SIGNED INT, UNSIGNED INT.
   + SHORT INT TYPE => SHORT INT, SIGNED SHORT INT, UNSIGNED SHORT INT, INT SHORT, SIGNED INT SHORT, UNSIGNED INT SHORT.  
   + LONG TYPE => LONG INT, SIGNED LONG INT, UNSIGNED LONG INT, INT LONG, SIGNED INT LONG, UNSIGNED INT LONG. 
   + LONG LONG TYPE => SIGNED LONG LONG, UNSIGNED LONG LONG.
   + FLOAT TYPE => FLOAT.
   + DOUBLE TYPE=> DOUBLE.
   + LONG DOUBLE TYPE=> LONG DOUBLE.

##Les opérateurs standards 

-      L'affectation (=)

Nom_variable=expression;

Affectation avec des valeurs constantes:

Pi = 3.14;

Lettre = 'L';

Affectation avec des valeurs variables:

a=b;

Affectation avec des expressions: voir la suite des opérateurs

-      Les opérateurs arithmétiques

+      addition

-      soustraction

*      multiplication

/      division

%      modulo (reste de la division entière) (par exemple, 5%2=1)

-    Les opérateurs logiques

&&       ET

||       OU

!        NON

Les résultats des opérations logiques sont de type int: la valeur 0 correspond à la valeur booléenne FAUX, la valeur 1 correspond à la valeur booléenne VRAI.

==        EGALITE                               !=        INEGALITE

<          INFERIEUR                           <=       INFERIEUR OU EGAL

>          SUPERIEUR                          >=       SUPERIEUR OU EGAL



##Les conditions

Les deux conditions principales sont if et switch :

if(test)
{
  // code à exécuter si le test est vrai
}
else
{
  // code à exécuter si le test est faux
}


switch(variable)
{
 case valeur1:
  // bloc1
  break;
 case valeur2:
  // bloc2
  break;
 defaut:
  // bloc_default
  break;
}


##Les boucles

Il existe deux types de boucle. La boucle for permet de réunir la déclaration, la condition et l'incrémentation.


int i;

for(i = 0; i < 10; i++)
{
  // bloc à répéter
}


int i = 0;

while(i < 10)
{
  // bloc à répéter
  i++;
}


##Les fonctions

Une fonction permet de renvoyer un résultat en fonction de données passées en paramètres. Pour déclarer une fonction.

La déclaration doit être faite avant l'appel de la fonction


##Pour résumer

Le C est un langage de haut niveau encore très utilisé aujourd'hui qui permet de créer des programmes.

Une évolution de ce langage existe, le C++, qui prend en compte le programmation orientée objet (POO).

Les notions principales à savoir sont les variables, les conditions, les boucles et les fonctions.


