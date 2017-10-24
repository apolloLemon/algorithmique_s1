#include <iostream>
#include <array>

int main() {
	const int rBuffSize = 512;
	const int cBuffSize = 512;

	using placesparrangees = std::array<char, cBuffSize>;
	using rangees = std::array<placesparrangees, rBuffSize>;
	ragees places;

	int row, cell, choixrang, choixplace;

	std::cout << "Entrez le nombres de rang et de places par rang separees d'un espace:\n";
	std::cin >> row >> cell;

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			places[i][j]='L';			
		}
	}

	std::cout << "\nChoisisez vos place a reserver, \"0 0\" pour terminer):\n";
	do {
		std::cin >> choixrang >> choixplace;
		if (choixrang>0 && choixplace>0){
			places[choixrang-1][choixplace-1] = 'R';
		}
	} while(choixrang!=0 || choixplace!=0);

	std::cout << "\nPlan des reservations de la salle:\n";
	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			std::cout << places[i][j] << ' ';			
		}
		std::cout << std::endl;
	}

	for (int i=0;i<row;i++) {
		for (int j=0;j<cell;j++) {
			if (places[i][j] == 'L') {
				std::cout << "\nPremiere place Libre: " << i+1 << " " << j+1 << std::endl;
				i=row; j=cell;
			}				
		}
	}

	return 0;
}