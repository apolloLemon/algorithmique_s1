#include <iostream>
#include <cmath>

using namespace std;

int main () {
	bool complx = false;
	float valeurs[3];

	cout << "Etrez les valeurs a,b et c pour remplir l'equation\nax^2+bx+c"<<endl;

	for(int i=0;i<3;i++){
		cout << "Entrez la valeur "<<i+1<<" : ";
		cin >> valeurs[i];
	}

	cout << valeurs[0] << "x^2 + " << valeurs[1] << "x + " << valeurs[2]<<endl;

	float determinant = valeurs[1]*valeurs[1]-4*valeurs[0]*valeurs[2];
	
	if(determinant<0){
		determinant = determinant*(-1);
		complx = true;
	}
	float racineA = (valeurs[1]*(-1)+sqrt(determinant))/(2*valeurs[0]);
	float racineB = (valeurs[1]*(-1)-sqrt(determinant))/(2*valeurs[0]);

	if (!complx) {
		cout << "Les Racines sont : "<< racineA << " et " << racineB;
	} else {
		cout << "Les Racines sont : "<< racineA << "i et " << racineB <<"i sur C";
	}

	cout << endl;
	return 0;
}