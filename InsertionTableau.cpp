#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int liste[6] = { 1,3,4,7,9 };
	int x;
	cout << "Entrez un nombre à insérer dans ce tableau {1,3,4,7,9} : ";
	cin >> x;
	liste[5] = x; // On ajoute le nouvel élément à la fin de la liste
	sort(liste, liste + 6); // Nous connaissons la dimension de la liste
	cout << "Le tableau après l'insertion: {";
	for (int i : liste) {
		cout << ' ' << i;
	}
	cout << "}";
	return 0;
}
