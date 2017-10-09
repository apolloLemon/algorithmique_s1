#include <iostream>

using namespace std;

int main () {

	for (int i=100; i<1000; i++) {
		int a = i%10;
		int b = (i%100-a)/10;
		int c = (i-b-a)/100;
		if (a!=b && a!=c && b!=c && a+b+c==9) cout << i << endl;
	}

	return 0;
}