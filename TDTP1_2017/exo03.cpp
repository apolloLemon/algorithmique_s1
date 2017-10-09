#include <iostream>

using namespace std;

int main () {

	float anglais, maths, info, moyenne;
	const int coefAnglais = 2;
	const int coefMaths = 4;
	const int coefInfo = 3;

	cout << "Note en Anglais (coeff. "<< coefAnglais <<"): ";
	cin >> anglais;
	cout << "Note en Mathematiques (coeff. "<< coefMaths <<"): ";
	cin >> maths;
	cout << "Note en Informatiques (coeff. "<< coefInfo <<"): ";
	cin >> info;

	moyenne = anglais*coefAnglais + maths*coefMaths + info*coefInfo;
	moyenne /= coefAnglais+coefMaths+coefAnglais;

	cout << "L'etudiant a obtenu " << moyenne <<" de moyenne.";
	if (moyenne >= 10 ) {
		cout << " Bravo!" << endl ;
	} else {
		cout << endl;
	}
}