#include <iostream>

using namespace std;

int main () {
	int n,sd=0;
	cin >> n;
	for(int j=1; j<=n; j++) {
		sd=0;
		for(int i=1; i<=j/2; i++) {
			if (j%i==0) {
				sd+=i;	
			}
		}
		if(j==sd) cout << j << " est parfait" << endl;
		else cout << j << " n'est pas parfait" << endl;
	}
	return 0;
}
