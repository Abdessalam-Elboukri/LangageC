#include <unistd.h>
#include <stdio.h>

int main(){
    
    char nom[30];
    char prenom[30];
    char age[30];
    char sexe[30];
    char telephone[30];

    printf("Votre Nom :\n");
    scanf("%s", nom);

	  printf("Votre Prenom :\n");
    scanf("%s", prenom);

    printf("Votre Age :\n");
    scanf("%s", age);

    printf("Votre Sexe :\n");
    scanf("%s", sexe);

    printf("Votre Telephone :\n");
    scanf("%s", telephone);


    printf("Nom Complet : %s %s | Age : %s | Sexe : %s | Telephone : %s .\n", nom, prenom, age, sexe, telephone);

    return 0;
}
