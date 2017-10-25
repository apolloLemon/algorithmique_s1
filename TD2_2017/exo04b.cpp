#include <iostream>

using namespace std;

int main () {
	int n, sol=0;
	cin >> n;
	for(int i=1;i<=n/2;i++){
		sol += i*(n-i);
	}
	cout << sol<<endl;
	return 0;
}