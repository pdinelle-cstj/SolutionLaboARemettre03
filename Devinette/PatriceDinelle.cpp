/*Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre.*/
// Auteur : Patrice Dinelle
// Date : 2020-10-03


#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	//Déclaration des variables
	int rep;
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur


	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	

	cout << "quelle est votre nombre ==> ";
	cin >> rep;

	while (rep != iRandom) // séparer ala réponse et enclancher la boucle
	{

		if (rep < 0 && rep > 100) //fair sure que c'est entre 0 et 100 
		{
		cout << "Le nombre que vous avez choisi est plus petit que 0 ou plus grand que 0 ";

		}
		cout << "Mauvaise réponse réessayer " << endl; //>
			cout << "quelle est votre nombre ==> ";	   //	 > réinitialiser variable
			cin >> rep;								   //>
	
	}

	cout << "Vous avez la bonne réponse ==> " << iRandom; // annoncer la réponse
}