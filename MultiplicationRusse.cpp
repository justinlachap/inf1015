#include <iostream>
#include <vector>

using namespace std;

struct Test {
	int a, b;
	int resultat = a * b;
};

int multiplicationRusse(int a, int b) {
	vector<int> nombresNonBarres;
	int resultat = 0;
	while (a >= 1) {
		if (a % 2 != 0) {
			nombresNonBarres.push_back(b);
		}
		a = a / 2;
		b = b * 2;
	}
	for (int i : nombresNonBarres) {
		resultat += i;
	}
	return resultat;
}

int main() {
	int a = 37, b = 129;
	Test test1 = { 21, 89 };
	Test test2 = { 5, 3500 };
	Test test3 = { 1999, 212 };
	if ((multiplicationRusse(test1.a, test1.b) == test1.resultat) and (multiplicationRusse(test2.a, test2.b) == test2.resultat) and (multiplicationRusse(test3.a, test3.b) == test3.resultat)) {
		cout << "3/3 tests passent";
	}
	else {
		cout << "Il y a eu une erreur, la multiplication russe ne fonctionne pas";
	}

	return 0;
}