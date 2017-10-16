#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int arraySize, ref, forloopstorage = 2147483647;
	cin >> arraySize;

	int tableau[arraySize];

	for(int i=0; i < arraySize; i++) {
		cin >> tableau[i];
	}
	cin >> ref;
	for(int i=0; i < arraySize; i++) {
		int intraloopstorage = tableau[i] - ref;
		intraloopstorage = abs(intraloopstorage);
		if(intraloopstorage<forloopstorage){
			forloopstorage=intraloopstorage;
		}
	}

	cout << "le nombre le plus proche est : " << forloopstorage+ref << endl;


	return 0;
}