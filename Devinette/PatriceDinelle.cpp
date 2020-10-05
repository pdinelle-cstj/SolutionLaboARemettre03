/*Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
L�utilisateur a un maximum de 5 chances. Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
nombre.*/
// Auteur : Patrice Dinelle
// Date : 2020-10-03


#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	//D�claration des variables
	int rep;
	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur


	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	

	cout << "quelle est votre nombre ==> ";
	cin >> rep;

	while (rep != iRandom) // s�parer ala r�ponse et enclancher la boucle
	{

		if (rep < 0 && rep > 100) //fair sure que c'est entre 0 et 100 
		{
		cout << "Le nombre que vous avez choisi est plus petit que 0 ou plus grand que 0 ";

		}
		cout << "Mauvaise r�ponse r�essayer " << endl; //>
			cout << "quelle est votre nombre ==> ";	   //	 > r�initialiser variable
			cin >> rep;								   //>
	
	}

	cout << "Vous avez la bonne r�ponse ==> " << iRandom; // annoncer la r�ponse
}