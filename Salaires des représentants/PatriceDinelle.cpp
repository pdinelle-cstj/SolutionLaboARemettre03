/*but : Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire. Entrez -1 � la valeur des ventes pour quitter le programme. */
// Auteur : Patrice Dinelle
// Date : 2020-10-03


#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//D�claration des variables
	float prix; // avoir le montant fait
	int nbsem;	// le nb de semaine
	const int semaine = 250; // le 250 par semaine (ne peux changer)
	float plus; // utiliser pour garder la r�ponse 
	float finale = 0; // pour acumuler les montant de chaque semaine (doit absolumet 0)

	cout << "Quelle est le montant de vente de la semaine (entrer -1 pour le r�sultat) ==> "; // demander la montant fait la semaine 
	cin >> prix;

	while (prix != -1)// pour isoler le -1 pour avoir le cumulatif 
	{
		cout << "Sur combien de semaine ? ==> "; // demander le nb de semaine 
		cin >> nbsem;

		plus =nbsem* semaine + ((prix / 100) * 7.5); // calculer la commision 

		cout << "la commition de cette semaine est de ==> " << plus << " $"<< endl;// afficher la commision

		finale = finale + plus;// calculer le cumulatif de chaque semaine 

		cout << "Quelle est le montant de vente de la semaine (entrer -1 pour le r�sultat) ==> ";//>r�initialiser variable
		cin >> prix;																			 //>r�initialiser variable
	}

	cout << "le cumulatif est ==> " << finale << " $";// afficher la cumulatif 



}


/*
plant de test 

montant			semaine			r�sultat			cumulatif
5000			1				625
5000			1				625
6000			3				1200
													2450



*/