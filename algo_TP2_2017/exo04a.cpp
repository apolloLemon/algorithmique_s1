#include <iostream>

using namespace std;

int main () {
	int n,sd=0;
	cin >> n;
	for(int i=1; i<=n/2; i++) {
		if (n%i==0) {
			sd+=i;	
		}
	}
	if(n==sd) cout << n << " est parfait" << endl;
	else cout << n << " n'est pas parfait" << endl;

	return 0;
}
