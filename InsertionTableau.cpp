#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int liste[6] = { 1,3,4,7,9 };
	int x;
	cout << "Entrez un nombre � ins�rer dans ce tableau {1,3,4,7,9} : ";
	cin >> x;
	liste[5] = x; // On ajoute le nouvel �l�ment � la fin de la liste
	sort(liste, liste + 6); // Nous connaissons la dimension de la liste
	cout << "Le tableau apr�s l'insertion: {";
	for (int i : liste) {
		cout << ' ' << i;
	}
	cout << "}";
	return 0;
}
