#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()

{
	vector<string> mots{ "" }; //Crée un premier mot vide dans le vecteur
	string phrase;
	int index = 0;
	cout << "Saisissez une phrase : ";
	getline(cin, phrase);
	for (auto i : phrase) {
		if (i != ' ') {
			mots[index] += i; // Tant qu'il n'y a pas d'espace, on termine le mot
		}
		else {
			mots.push_back(""); // Crée un nouveau mot dans le vecteur
			index += 1;
		}
	}
	int min = mots[0].size(), max = mots[0].size(); // On suppose que le premier mot du vecteur est le plus long et le plus court
	int sizes = 0;
	string motCourt = mots[0], motLong = mots[0];
	for (string j : mots) {
		sizes += j.size();
		if (j.size() <= min) {
			min = j.size();
			motCourt = j;
		}
		if (j.size() > max) {
			max = j.size();
			motLong = j;
		}
	}

	double floatSizes = (double)sizes; // Pour une division fractionnaire
	cout << "Le mot le plus court est : " << motCourt << endl;
	cout << "Le mot le plus long est : " << motLong << endl;
	cout << "La longueur moyenne est : " << floatSizes / mots.size() << " lettres";

}

