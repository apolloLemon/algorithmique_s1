#include <iostream>

using namespace std;

int main () {
	unsigned int n;
	float sol;
	cin >> n;
	if(n=0){
		cout << "n>0\n";
		return 0;	
	} 
	for(int i=0;i<=n;i++){
		sol = sol*((i*i)/n);
	}


	return 0;
}