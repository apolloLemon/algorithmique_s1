#include <iostream>
#include <array>

using namespace std;

const int buffSize = 128;
using tablo = array<int,buffSize>;
tablo T, U, V;
unsigned int Tsize, Usize=0, Vsize=0;

void gatherT () {
	for(int i=0; i<Tsize; i++) {
		cout << "T["<<i<<"] = ";
		cin >> T[i];
	}
}

void makeU (int x) {
	for(int i=0; i<Tsize; i++){
		if (T[i]>x) {
			U[Usize] = T[i];
			Usize++;
		}
	}
}

void makeV (int x) {
	for(int i=0; i<Tsize; i++){
		if (T[i]<=x) {
			V[Vsize] = T[i];
			Vsize++;
		}
	}
}

int main () {
	cin >> Tsize;
	gatherT();

	int x;
	cin >> x;
	makeU(x);
	makeV(x);

	for(int i=0; i<Usize;i++){
		cout << U[i] << " ";
	}
	cout << endl;
	for(int i=0; i<Vsize;i++){
		cout << V[i] << " ";
	}
	cout << endl;
	return 0;
}