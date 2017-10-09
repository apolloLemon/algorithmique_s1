#include <iostream>

using namespace std;

int ChangePlaces (int size) {
	int valeurs[size];
	int swtch;

	for(int i=0; i < size; i++) {
		cout << "Entrez la valeur v" << i+1 << ": ";
		cin >> valeurs[i];
	}
	for(int i=0; i < size; i++) {
		cout << " v" << i+1 << " = " << valeurs[i] << ",";
		if(i == size-1) {
			cout << endl << " Nous allons les permuter:";
		}
	}

	swtch = valeurs[0];
	for(int i=1; i < size; i++) {
		valeurs[i-1] = valeurs[i];
	}
	valeurs[size-1] = swtch;
	for(int i=0; i < size; i++) {
		cout << " v" << i+1 << " = " << valeurs[i] << ",";
		if(i == size-1) {
			cout << endl;
		}
	}
	return 0;
}


int main () {
	int size;
	cout << "Combien d'entiers voulez vous echanger ? : ";
	cin >> size;

	ChangePlaces(size);
	return 0;
}
