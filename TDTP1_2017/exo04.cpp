#include <iostream>

using namespace std;

int main () {
	int v1, v2, swtch;
	cout << " Entrez un entier v1 et v2 separes d'un espace: ";
	cin >> v1 >> v2;
	cout << "   v1 = "<< v1 << " et v2 = "<< v2 <<"\n Nous alons les echanger:"<<endl;
	swtch = v1;
	v1 = v2;
	v2 = swtch;
	cout << "   v1 = " << v1 << " et v2 = " << v2 << endl;
}