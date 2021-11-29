#include <stdio.h>
#include <string.h>

typedef struct info_client {
    char nom[20];
    char prenom[20];
    char cin[8];
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

void Affichage_allComptes(int length){  //FUNCTION TO SHOW THE ACCOUNTS
	int i ;
	int t = 1;
	
	for(i = 0 ; i <length ; i++)

		{
			printf("%d . %s       \t%s             \t%s       \t%.2f DH\n" ,t, all_clients[i].nom , all_clients[i].prenom 
			, all_clients[i].cin , all_clients[i].montant );
			t++;
		}
}

// =============================================================================================


// ==============================================================================================

void Cin_Comparaison_Operations(char entered_Cin[8],int length){
		char choix_1;
        int i;
        int t = 1;
         for(i = 0; i<length ;i++){
             if(strcmp(all_clients[i].cin,entered_Cin) == 0){
                 unknown_error1:
                 printf("==============================================\n");
                 printf("%s || %s || %s || %0.2f \n",all_clients[i].nom,all_clients[i].prenom,
				 all_clients[i].cin,all_clients[i].montant);
				 printf("==============================================\n\n");
				 printf("Est-ce que le compte que vous choisissez (y/n) : ");
				 scanf("%s",&choix_1);
				 if(choix_1 == 'y' || choix_1 == 'Y'){
				 int n;
				 Unknown_error :
				 printf("============================================ \n");				 
				 printf("1 :> Depot \n");
				 printf("2 :> Retrait \n");
				 printf("============================================ \n\n");
				 printf("Choisissez Votre Operation :>");	 
				 scanf("%d",&n);
				 if(n == 1){
					float depot;
					depot_check :
		            printf("Entrer le montant que voulez-vous Deposer :");
		            scanf("%f",&depot);
		            if(depot<0){
		            	printf("Entrer une valide Montant\n");
		            	goto depot_check;
					}else if(depot <100){
						printf("Entrer une Montant Superieur a 100DH\n");
						goto depot_check;
					}
					else{
					
		            all_clients[i].montant = all_clients[i].montant + depot;
		            printf("%s || %s || %s || %0.2f \n\n",all_clients[i].nom,all_clients[i].prenom,
				    all_clients[i].cin,all_clients[i].montant);
				        
				    break;
					}	
				}
					else if(n==2){
						float retrait;
						insufisant_checkpoint:
		             	printf("Entrer le montant que voulez-vous Retirer :>");
		             	scanf("%f",&retrait);
		             	if(retrait < 100){
		             	printf("invalid montant :/ \n");
					 }else if(retrait > all_clients[i].montant){
					 	printf("Sold Insufisant :/ \n");
					 	
					 	goto insufisant_checkpoint;
					 }
					 else if(n!=1 || n!=2){
						printf("Unknown Error , try again !\n");
						goto Unknown_error ;
					}
					 else{
					 	printf("==========================================\n") ;
		                all_clients[i].montant = all_clients[i].montant - retrait;
		                printf("==============Votre Noveau Sold============== \n");
		                 printf("%s || %s || %s || %0.2f \n",all_clients[i].nom,all_clients[i].prenom,
				        all_clients[i].cin,all_clients[i].montant);
				        printf("==========================================\n\n") ;				        
				        break;
					}
					
				}
			}	 		
				else if(choix_1 =='n'||choix_1 =='N'){
					printf("Your next account\n");
				}
				else {
					printf("Unknown Error , try again\n");
					goto unknown_error1;
				}
		} 
    }      
}	

void Decroissant (int length){
	int i, j, a;
	  for (i = 0 ; i< length ; ++i)
        {
            
            for(j=i + 1 ; j<length ;++j)
            {
            	
                if(all_clients[i].montant > all_clients [j].montant)
                {
                    a = all_clients[i].montant;
                    all_clients[i].montant = all_clients[j].montant;
                    all_clients[j].montant= a ;
                } 
        	}
        }
         printf("Affichage de comptes(Decroissant):\n");
        for (i = 0; i < length; ++i)
            printf(" %s  \t%s  \t%s  \t%.2f \n" , all_clients[i].nom , all_clients[i].prenom 
			, all_clients[i].cin , all_clients[i].montant );
		              
}

//==========================================================================================================
int main()
{
	//system("COLOR 1E");

	int length = (sizeof(all_clients))/(sizeof(all_clients[0]));
	int choix , c , i , j ;// le choix, numero de utilisateur, nombre de comptes pour creer
	char RtrMenu;
	char entered_Cin[8];
	
	debut:
	printf("==========================MENU==========================\n\n\n");
	printf("\t\t1. Introduire un Seul Compte .\n\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t2. Introduire plusieur Comptes .\n\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t3. Operations .\n\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t4. Affichage de Comptes(Decroissant).\n\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\t0. Quitter .\n\n\n");		
	printf("=========================================================\n");		

		do{
			printf("Choisez Votre Choix :");
			scanf("%d" , &choix);
			
			system("cls");
			break;
			
		}while(choix != 0);
		
		switch(choix)
			{
			case 1 :{
				printf("\n\n\n===================Creation du Compte===================\n\n\n");
				
					printf("Votre Nom :");
					scanf("%s" , all_clients[length].nom);
					printf("Votre Prenom :");
					scanf("%s" , all_clients[length].prenom);
					printf("Votre Cin :");
					scanf("%s" , all_clients[length].cin);
					printf("\n\n");
				    printf("Votre compte a ete cree :)\n");
				    
				    ++length;
				
	 // ******************RETOUR AU MENU******************							
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
				 	
			   		printf("\n\n\n===================Creation Plusieur Comptes===================\n\n\n");
    				printf("Combien du Comptes Voulez-vous creer (MAX = 5) ?\n");
    				scanf("%d" , &c);
    				if(c > 0 && c <= 5 ){
	    			for(i = 1 ; i <= c ; i++)
					{  
						printf("Entrer Les info du Compte No: %d \n", i);
						printf("========================================\n");
						printf("Votre Nom :");
						scanf("%s" , all_clients[length].nom);
						printf("Votre Prenom :");
						scanf("%s" , all_clients[length].prenom);
						cin_verefication :
						printf("Votre Cin :");
						scanf("%s" , all_clients[length].cin);
						for(j=0 ; j<length ; j++){
						
						if(strcmp(all_clients[j].cin,all_clients[length].cin) == 0){
							printf("this CIN already Used , Try Another ! \n");
							goto cin_verefication;
						}
						}
						printf("========================================\n");
						printf("\n\n");
						++length ;
						if(i == c){
						    break;
						}
				}
					}
				 	else{
						
				 		goto checkpoint2;
				 	}
					
				    printf("Vos comptes ont ete crees :) \n");
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
//					break;
			}
					
			case 3:
				{
				printf("\n\n\n===================Afficher Toute Les Comptes===================\n\n\n");
				
				Affichage_allComptes(length);
				
				printf("\n\n");
				
					printf("Recherche De Votre Compte .\n\n");
					printf("Entrer Votre CIN :");
					scanf("%s" , entered_Cin);
					
					printf("EnCours ... \n");
					
						Cin_Comparaison_Operations(entered_Cin, length);
						
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
				case 4:
				{
					Decroissant(length);
					
	 // ******************RETOUR AU MENU******************
						printf("\nAll Done :)");
				 		rtrmenu3:  //checkpoint
						printf("\nRetour au Menu ( y ) :");
						scanf("%s" , &RtrMenu);
							if(RtrMenu =='y' || RtrMenu =='Y')
							{
								system("cls");
								goto debut;
							}
							else{
								goto rtrmenu3;
							}
	 // *****************FIN RETOUR AU MENU*****************
							}			
		} 

    return 0;
    
}

