#include <iostream>

using namespace std;

int main () {
	int x, divs = 1;
	cin >> x;

	for (int i=1; i<=x/2; i++) {
		if(x%i==0) {
			cout << i << " ";
			divs++;
		}
	}
	cout << x << " soit " << divs << " diviseurs";
	if (divs == 2) cout << ", donc " << x << " est premier";
	cout <<endl;  

	return 0;
}