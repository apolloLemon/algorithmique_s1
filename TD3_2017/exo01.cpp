#include <iostream>
#include <cmath>
using namespace std;

double power (double a, double b) {
	if (a==0) return 0;
	const double e = 2.71828182846;
	return pow(e,b*log(a));
}

int main () {
	double A, B;

	cin >> A >> B;
	if (A>=0) cout << A <<"^"<< B <<" = "<< power(A,B) <<endl;
	else cout << "a >= 0 pls\n";

	return 0;
}