#include <iostream>

using namespace std;

int calcul(double U0, double precision) {
	double Un = sqrt(2 + U0);
	for (;;) {
		U0 = Un;
		Un = sqrt(2 + Un);

		if (Un - U0 < precision) {
			return round(Un); // On cherche la limite donc il faut arrondir comme ça tent à l'infini

		}

	}
}


int main()
{
	double U0 = 1;
	double precision = 0.00001; //La précision peut être changée dans cette variable
	cout << calcul(U0, precision);
	return 0;
}
