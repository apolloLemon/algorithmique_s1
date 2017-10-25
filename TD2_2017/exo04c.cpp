#include <iostream>

using namespace std;

int main () {
	float n, sol=1;
	cin >> n;
	if(n==0){
		cout << "n>0\n";
		return 0;	
	} 
	for(int i=1;i<=n;i++){
		sol *=((i*i)/n);
	}
	cout << sol <<endl;

	return 0;
}