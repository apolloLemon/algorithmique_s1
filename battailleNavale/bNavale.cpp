#include <iostream>

using namespace std;

int possibleDir (int boatSz, int grid[][], int xr, int yr) {


	return 0;
}

int main () {
	srand(time(NULL));

	int xs = 10, ys = 10;
	int grid[ys][xs] = {0};

	int boatNum;
	cin >> boatNum;

	int boats[boatNum+1] = {1};
	for(int i=1; i<=boatNum;i++) {
		cin >> boats[i];

		int xr, sr, dr;
		xr = rand()%xs;
		yr = rand()%ys;
		
	}

	return 0;
}