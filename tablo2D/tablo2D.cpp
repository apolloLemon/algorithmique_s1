#include <iostream>

using namespace std;

int main() {
	int row, cell, choixrang, choixplace;
	bool modechoix = true;

	cin >> row >> cell;

	char places[row][cell];

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			places[i][j]='L';			
		}
	}

	while(modechoix) {
		cin >> choixrang >> choixplace;
		if (choixrang>0 && choixplace>0){
			places[choixrang-1][choixplace-1] = 'R';
		} else modechoix = false;
	}	

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			cout << places[i][j] << ' ';			
		}
		cout << endl;
	}

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			if (places[i][j] == 'L') {
				cout << "Premiere place Libre: " << i+1 << " " << j+1 << endl;
				i=row; j=cell;
			}				
		}
	}

	return 0;
}