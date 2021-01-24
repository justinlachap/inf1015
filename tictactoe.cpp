#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string joueur(char symbol) // détermine quel joueur a gagné
{
	if (symbol == 'x') {
		return "Le joueur 1 gagne";
	}
	else if (symbol == 'o'){
		return "Le joueur 2 gagne";
		}
}

int main()
{
	string grilleChoisie, jeu, output;
	char listeJeu[3][3]; // tableau tic-tac-toe
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
	for (int i = 0; i < 3; i++) {
		if (listeJeu[i][0] == listeJeu[i][1] and listeJeu[i][0] == listeJeu[i][2]) { // gagner horizontalement
			output = joueur(listeJeu[i][0]);
		}

		if (listeJeu[0][i] == listeJeu[1][i] and listeJeu[0][i] == listeJeu[2][i]) { // gagner verticalement
			output = joueur(listeJeu[0][i]);
		}
	}
	// gagner en diagonale 
	if ((listeJeu[0][0] == listeJeu[1][1] and listeJeu[0][0] == listeJeu[2][2]) or (listeJeu[0][2] == listeJeu[1][1] and listeJeu[0][2] == listeJeu[2][0])) {
		output = joueur(listeJeu[1][1]);

	}
	if (output.length() == 0) {
		output = "Egalite";
	}
	cout << output;
	return 0;
}
