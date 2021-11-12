#include<stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Ce program est calculer la somme de deux valeurs entières données.\n Si les deux valeurs sont identiques, il renvoie le triple de leur somme \n \n \n");
	
	printf("Entrer la valeur de le Nombre 1 :");
	scanf("%d", &num1);
	
	printf("Entrer la valeur de le Nombre 2 :");
	scanf(" %d", &num2);
	
	if(num1 == num2) {
		printf("Resultat est: %d", (num1 + num2)*3);
		
	}else{
		printf("Resultat est : %d", num1 + num2);
}
return 0;
	
}
