#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string grilleChoisie, jeu, output;
	char listeJeu[3][3];
	int indexLigne = 0;
	cout << "Entrez la grille de votre choix: ";
	cin >> grilleChoisie;
	ifstream fichier;
	fichier.open(grilleChoisie);
	if (fichier.is_open()) {
		while (getline(fichier, jeu)) {
			listeJeu[indexLigne][0] = jeu[0];
			listeJeu[indexLigne][1] = jeu[2];
			listeJeu[indexLigne][2] = jeu[4];
			indexLigne += 1;
		}
		fichier.close();
		indexLigne = 0;
	}
	// gagner horizontalement
	for (int i = 0; i < 3; i++) {
		if (listeJeu[i][0] == listeJeu[i][1] == listeJeu[i][2]) {
			if (listeJeu[i][0] == 'x') {
				output = "Le joueur 1 gagne";
			}
			else if (listeJeu[i][0] == 'o') {
				output = "Le joueur 2 gagne";
			}
		}
	}
	// gagner verticalement
	for (int i = 0; i < 3; i++) {
		if (listeJeu[0][i] == listeJeu[1][i] == listeJeu[2][i]) {
			if (listeJeu[0][i] == 'x') {
				output = "Le joueur 1 gagne";
			}
			else if (listeJeu[0][i] == 'o') {
				output = "Le joueur 2 gagne";
			}
		}
	}
	// gagner en diagonale 
	if ((listeJeu[0][0] == listeJeu[1][1] == listeJeu[2][2]) or (listeJeu[0][2] == listeJeu[1][1] == listeJeu[2][0])) {
		if (listeJeu[1][1] == 'x') {
			output = "Le joueur 1 gagne";
		}
		else if (listeJeu[1][1] == 'o') {
			output = "Le joueur 2 gagne";
		}
	}
	if (output.length() == 0) {
		cout << "Egalite";
	}
	return 0;
}
