#include <iostream>

using namespace std;

int main () {
	int nombre;
	cout << "Choisez un nombre :";
	cin >> nombre;

	for(int i=0; i<=10; i++) {
		cout << nombre << "x" << i << " = " << nombre*i << endl;
	}

	return 0;
}
