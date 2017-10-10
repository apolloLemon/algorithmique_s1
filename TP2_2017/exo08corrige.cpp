#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main () {
	const int bufferSize = 1000;
	int arraySize, ref, forloopstorage = 2147483647;
	cin >> arraySize;

	array<int, bufferSize> tableau;

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