#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int n;
	float a,x,r=0;
	cout << "Pour calculer le resultat pour x d'un polynome de type\n a0x^0,a1x^1,...,(an-1)x^(n-1),anx^n\nVeullez entrez la valeur de x et d separees par un espace, puis les valeurs de a separees par des retours a la ligne\nEntrez: x n -> ";
	cin >> x >> n;

	for (int i=0; i<=n;i++) {
		cout << "entrez a" <<i<<" :: ";
		cin >> a;
		float temp = a*pow(x,i);
		r += temp;
		cout << a << " x " << x << "^" << i <<" = " <<temp<<endl;
	}

	cout << "Le resultat est " << r << endl;
	return 0;
}