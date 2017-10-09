#include <iostream>
#include <string>

using namespace std;

int main () {
	int x;
	bool prime = true;
	cin >> x;

	if (x>2 && x%2==0) prime = false;
	else for (int i=3; i<x; i+=2) {
		if (x%i==0) prime = false;
	}
	string message = (prime) ? " est premier" : " n'est pas premier"; 
	cout << x << message << endl;

	return 0;
}