#include <iostream>

using namespace std;

int main () {
	int a,b,c,d,op;
	cout << "Entrez deux nombres entiers separes par un espace : ";
	cin >> a >> b;
	cout << "choisiez le int correspondant a l'opperation desiree\n1: +\n2: -\n3: *\n4: /\n";
	cin >> op;

	switch(op){
		case 1:
			c=a+b;
			break;
		case 2:
			c=a-b;
			break;
		case 3:
			c=a*b;
			break;
		case 4:
			c=a/b;
			break;
		default:
			break;
	}
	cout << "Entrez la solution :";
	cin >> d;
	if (d==c){
		cout << "Bravo";
	} else cout << "Dommage la reponse est : "<< c;

	cout << endl;
	return 0;
}