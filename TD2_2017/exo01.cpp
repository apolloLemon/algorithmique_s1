#include <iostream>

using namespace std;

long factorial (long x) {
	if (x==1) return 1;
	return x*factorial(x-1);
}

int main () {
	long x;
	cout << "De quel nombre voulez vous le factoriel? (Max 20)" << endl;
	cin >> x;
	cout << x << "! = " << factorial(x)<<endl;
	return 0;
}