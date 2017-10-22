#include <iostream>
using namespace std;

int main() {
	int row, cell, choixrang, choixplace;
	cin >> row >> cell;
	bool places[row][cell];

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			places[i][j]=0;			
		}
	}

	do {
		cin >> choixrang >> choixplace;
		if (choixrang>0 && choixplace>0){
			places[choixrang-1][choixplace-1] = 1;
		}
	} while (choixrang!=0 || choixplace!=0);	

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			cout << places[i][j] << ' ';			
		}
		cout << endl;
	}

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			if (!places[i][j]) {
				cout << i+1 << " " << j+1 << endl;
				i=row; j=cell;
			}				
		}
	}

	return 0;
}