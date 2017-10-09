#include<iostream>
#include<cmath>

using namespace std;

int main () {
	float x;

	cout << "f(x)= (abs(x)+3*pow(x,2))/((2/3)*pow(x,2)-6)  x = ";
	cin >> x;
	cout << "f("<<x<<") = " << (fabs(x)+3*pow(x,2))/((2/3)*pow(x,2)-6) << endl;
}
