#include <stdio.h>
#include <math.h>
int main(void)
 {
 
 FILE *fp;
 char choix, nom[20], prenom[20], num[10], mail[30], y;
 int i, x, id, ide;
 int *p = &id;
 fp = fopen("repertoire.txt", "a+");
 
    printf("Bienvenue sur le logiciel");
 	printf("\n\n***************************************MENU**********************************************\n\n\n");
 	printf("Saisir a pour ajouter une personne dans le repertoire \n");
	printf("Saisir b pour afficher le contenu du repertoire\n");
	printf("Saisir c pour rechercher une personne dans le repertoire en specifiant son identifiant\n");
	printf("Saisir d pour supprimer une personne du repertoire\n");
	printf("Saisir e pour supprimer le contenu du repertoire\n");
	scanf("%c", &choix);
	getchar();
	
	
	if ( choix == 'a')
	{
		printf("Combien de personne allez-vous entrez dans le repertoire ? : ");
		scanf("%d", &x);
		
		for (i = 0; i < x; i++)
		{
		
	      printf("Identifiant :\n");
	      scanf("%d", &id);
	      printf("Nom : \n");
	      scanf("%s", &nom);
	      printf("Prenom :\n");
	      scanf("%s", &prenom);
	      printf("Numero de telephone : \n");
	      scanf("%s", &num);
	      printf("Adresse mail : ");
	      scanf("%s", &mail);
	     
	
	      fprintf(fp,"%d  %s  %s  %s  %s  \n" , id, nom[i], prenom[i], num[i], mail[i]);
        }
	}
	if (choix == 'b')
	
	{    
	   
	   for (i = 0; i < 5; i++)
	{
	   fscanf(fp,"%d", &id);
	   printf("%d   ", id);
	  fscanf(fp,"%s", &nom);
	   printf("%s   ", nom);
	   fscanf(fp,"%s", &prenom);
	   printf("%s   ", prenom);
	   fscanf(fp,"%s", &num);
	   printf("%s   ", num);
	   fscanf(fp,"%s", &mail);
	   printf("%s   \n\n", mail);
	  
	} 
		
	}
	
	if (choix == 'c')
	{
	   	printf("Saisir l'identifiant pour rechercher une personne dans le repertoire : \n");
	   	scanf("%d", &ide);
	   	
	   	for (i = 0; i < 5; i++)
	   	{
		   
		   
	   		  fscanf(fp,"%d", &id);
	          
	          fscanf(fp,"%s", &nom);
	          
	          fscanf(fp,"%s", &prenom);
	         
	          fscanf(fp,"%s", &num);
	          
	          fscanf(fp,"%s", &mail);
	         
	          
	          if (ide == id)
	          {
	          	printf("%d   ", id);
	          	printf("%s   ", nom);
	          	printf("%s   ", prenom);
	          	printf("%s   ", num);
	          	printf("%s   \n\n", mail);
			  }
	    }
	}	
	
	if (choix == 'd')
	{
		fp = fopen ("repertoire.txt", "w+");
		printf("Vous avez suprimer tout le contenue !");
	}
	
}
