#include <iostream>

using namespace std;

int main () {
	const unsigned int maxi = 21;
	unsigned int notes[maxi]={0}, usrin;

	do {
		cin >> usrin;
		if(usrin<maxi) {
			notes[usrin]++;
		}

	} while(usrin<maxi);

	for(int i=0;i<maxi;i++) {
		cout << i << " :";
		for(int j=0;j<notes[i];j++){
			cout << " *";
		}
		cout << endl;
	}

	return 0;
}