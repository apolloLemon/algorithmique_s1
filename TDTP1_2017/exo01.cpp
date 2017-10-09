#include <iostream>

using namespace std;

int main () {

	int x, y, z;

	/*cout << "Entrez un entier: ";
	cin >> x;
	cout << "Entrez un autre entier: ";
	cin >> y;*/

	cout << "Entrez deux nombres: ";
	cin >> x >> y;

	z = x*y;

	cout << "Le produit de " << x << " et de " << y << " est: " << z << endl;

	return 0;
}