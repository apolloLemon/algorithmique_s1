#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

	int x;

	cout << "Choisiez un nombre entier: ";
	cin >> x;
	cout << "La valeur absolut de "<< x << " est: " << abs(x) << ", "<< x << " est une valeur ";
	if(x%2==0) {
		cout <<"paire."<<endl;
	} else {
		cout <<"impaire."<<endl;
	}

}