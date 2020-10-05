/*but : Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les
représentants reçoivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme. */
// Auteur : Patrice Dinelle
// Date : 2020-10-03


#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//Déclaration des variables
	float prix; // avoir le montant fait
	int nbsem;	// le nb de semaine
	const int semaine = 250; // le 250 par semaine (ne peux changer)
	float plus; // utiliser pour garder la réponse 
	float finale = 0; // pour acumuler les montant de chaque semaine (doit absolumet 0)

	cout << "Quelle est le montant de vente de la semaine (entrer -1 pour le résultat) ==> "; // demander la montant fait la semaine 
	cin >> prix;

	while (prix != -1)// pour isoler le -1 pour avoir le cumulatif 
	{
		cout << "Sur combien de semaine ? ==> "; // demander le nb de semaine 
		cin >> nbsem;

		plus =nbsem* semaine + ((prix / 100) * 7.5); // calculer la commision 

		cout << "la commition de cette semaine est de ==> " << plus << " $"<< endl;// afficher la commision

		finale = finale + plus;// calculer le cumulatif de chaque semaine 

		cout << "Quelle est le montant de vente de la semaine (entrer -1 pour le résultat) ==> ";//>réinitialiser variable
		cin >> prix;																			 //>réinitialiser variable
	}

	cout << "le cumulatif est ==> " << finale << " $";// afficher la cumulatif 



}


/*
plant de test 

montant			semaine			résultat			cumulatif
5000			1				625
5000			1				625
6000			3				1200
													2450



*/