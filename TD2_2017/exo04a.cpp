	#include <iostream>

using namespace std;

int main () {
	int n, sol=0;
	cin >> n;
	for(int i=1; i<=n; i++){
		sol+=i*i;
	}
	cout << sol<<endl;
}