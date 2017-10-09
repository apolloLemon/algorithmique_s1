#include <iostream>

using namespace std;

int main () {
	int x;	
	cout << "Chosisez un nombre: ";
	cin >> x;
	for(int i=0; i<x; i++) {
		for(int j=0; j<x; j++) {
			if ((j-i)%2==0) cout << "#";
			else cout << " ";
		}
		if(i-1<x) cout << endl;
	}
	return 0;
}
