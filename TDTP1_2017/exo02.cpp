#include <iostream>

using namespace std;

int main () {
	float x;

	cout << "f(x) = (x*x-3*x+.5)*(x-3) pour x = ";
	cin >> x;
	cout << "f(" << x << ") = " << (x*x-3*x+.5)*(x-3) << endl;

	return 0;
}