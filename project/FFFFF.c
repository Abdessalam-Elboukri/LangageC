#include <stdio.h>
#include <string.h>

typedef struct info_client {
    char nom[20];
    char prenom[20];
    char cin[10];
    float montant;

} client;


client all_clients[] ={
		{"ahmad","essary","EE1100",19600},
		{"jalil","sabiry","EE1101",10040},
		{"chaimae","ben moussa","EE1102",102500},
		{"salwa","nadifi","EE1103",10500},
		{"salma","rahimi","EE1104",12500},
		{"nosaiba","mqaoui","EE1105",10400},
		{"ahmad","essary","EE1100",105400},
		{"jalil","sabiry","EE1101",107600},
		{"chaimae","ben moussa","EE1102",10000},
		{"salwa","nadifi","EE1103",10000},
		{"salma","rahimi","EE1104",10530},
		{"nosaiba","mqaoui","EE1105",10000},
		{"ahmad","essary","EE1100",107800},
		{"jalil","sabiry","EE1101",10000},
		{"chaimae","ben moussa","EE1102",100550},
		{"salwa","nadifi","EE1103",10350},
		{"salma","rahimi","EE1104",100670},
		{"nosaiba","mqaoui","EE1105",127000},
};
// ============================================================================================

void Affichage_allComptes(int length){
	int i ;
	int t = 1;
	
	for(i = 0 ; i <= length ; i++)

		{
			printf("%d . %s | %s | %s | %.2f \n" ,t, all_clients[i].nom , all_clients[i].prenom 
			, all_clients[i].cin , all_clients[i].montant );
			t++;
		}
}

// =============================================================================================
void Creation_Scomptes(int length){
	printf("\n\n\n===================Creation du Compte===================\n\n\n");
				
					printf("Votre Nom :");
					scanf("%s" , all_clients[length].nom);
					printf("Votre Prenom :");
					scanf("%s" , all_clients[length].prenom);
					printf("Votre Cin :");
					scanf("%s" , all_clients[length].cin);
					printf("\n\n");
				    printf("le compte a été créé \n");
				    
				    ++length;
}


// ==============================================================================================

void Creation_Pcomptes( int length){
    
    int i,c;
    
    printf("\n\n\n===================Creation Plusieur Comptes===================\n\n\n");
    printf("Combien du Comptes Voulez-vous creer ?\n");
    scanf("%d" , &c);
	    for(i = 0 ; i <= c ; i++)
		{  
			printf("Entrer Les info du Compte No: %d \n", i+1);
				printf("Votre Nom :");
				scanf("%s" , all_clients[length].nom);
				printf("Votre Prenom :");
				scanf("%s" , all_clients[length].prenom);
				printf("Votre Cin :");
				scanf("%s" , all_clients[length].cin);
				printf("\n\n");
				++length ;
				if(i == c){
				    break;
				}
		    
		}		
		
}
 
// ============================================================================================

void Cin_Comparaison_Operations(char entered_Cin[8],int length){
		
         int i;
         int t = 1;
         for(i = 0; i<length ;i++){
             if(strcmp(all_clients[i].cin,entered_Cin) == 0){
                 
                 
                printf("%s || %s || %s || %0.2f \n",all_clients[i].nom,all_clients[i].prenom,
				 all_clients[i].cin,all_clients[i].montant);
				 printf("est-ce que le compte que vous choisissez :y/n ");
				 char choix_1;
				 scanf("%s",&choix_1);
				 if(choix_1 == 'y'){
				 int n;				 
				 printf("1 :> Depot \n");
				 printf("2 :> Retrait \n");
				 printf("Choisissez Votre Operation :>");	 
				 scanf("%d",&n);
				 if(n == 1){
				 	float depot;
		             printf("Entrer le montant qu voulez-vous depot :");
		             scanf("%f",&depot);
		                all_clients[i].montant = all_clients[i].montant + depot;
		                 printf("%s || %s || %s || %0.2f \n",all_clients[i].nom,all_clients[i].prenom,
				        all_clients[i].cin,all_clients[i].montant);
				        
				        break;
					}	
					
					else if(n==2){
						float retrait;
		             printf("Entrer le montant qu voulez-vous depot :");
		             scanf("%f",&retrait);
		                all_clients[i].montant = all_clients[i].montant - retrait;
		                 printf("%s || %s || %s || %0.2f \n",all_clients[i].nom,all_clients[i].prenom,
				        all_clients[i].cin,all_clients[i].montant);
				        
				        break;
					}
	 
				}	 
				
		 	} 
        }
        
	}	
     
     

//==========================================================================================================
int main()
{
	int length = (sizeof(all_clients))/(sizeof(all_clients[0]));
	int choix , nbr , c , i ;// le choix, numero de utilisateur, nombre de comptes pour creer
	char RtrMenu;
	
	debut:
	printf("\n\n\n==========================MENU==========================\n\n\n");
	printf("1. Creer une Seul Compte .\n\n");
	printf("2. Creer plusieur Comptes .\n\n");
	printf("3. Afficher Les Comptes .\n\n");
	printf("4. Fedilisation .\n\n");
	printf("0. Exit .\n\n");		

		do{
			printf("Choisez Votre Choix :");
			scanf("%d" , &choix);
			
			system("cls");
			break;
			
		}while(choix != 0);
		
		switch(choix)
			{
			case 1 :{
				Creation_Scomptes(length);
				
	 // ******************RETOUR AU MENU******************
					printf("\n");							
						printf("\nAll Done :)");
				 		rtrmenu:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &RtrMenu);
							if(RtrMenu =='y')
							{
								system("cls");
								goto debut;
							}
							else{
								goto rtrmenu;
							}
	 // ****************FIN RETOUR AU MENU*****************
				break;
			}
			case 2:{
			     
					checkpoint2 :
				 	if(c > 0 && c <= 10 ){
			   		Creation_Pcomptes(length);
				 	}
				 	else{
						
				 		goto checkpoint2;
				 	}
					
				    printf("\nVos comptes ont été créés . \n");
				    
				    
				    
				    // Affichage_allComptes();
	 // ******************RETOUR AU MENU******************
					printf("\n");							
						printf("\nAll Done :)");
				 		rtrmenu1:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &RtrMenu);
							if(RtrMenu =='y')
							{
								system("cls");
								goto debut;
							}
							else{
								goto rtrmenu1;
							}
	 // ******************FIN RETOUR AU MENU******************
					break;
			}
					
			case 3:
				{
				char entered_Cin[8];
				
				printf("\n\n\n===================Afficher Toute Les Comptes===================\n\n\n");
				
				Affichage_allComptes(length);
				
				printf("\n\n");
				
					printf("Recherche De Votre Compte .\n\n");
					printf("Entrer Votre CIN :");
					scanf("%s" , entered_Cin);
					
					printf("EnCours ... \n");
					
						Cin_Comparaison_Operations(entered_Cin, length);
						
//						printf("Slect An Account :");
//						scanf("%d" , &t);

					//	Operation_bancaire(entered_Cin[8], length);
						
						Affichage_allComptes(length);
						
						
						
	 // ******************RETOUR AU MENU******************
						printf("\nAll Done :)");
				 		rtrmenu2:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &RtrMenu);
							if(RtrMenu =='y' || RtrMenu =='Y')
							{
								system("cls");
								goto debut;
							}
							else{
								goto rtrmenu2;
							}
	 // ******************FIN RETOUR AU MENU******************
						
				}	

										
				
		} 

    return 0;
    
}

