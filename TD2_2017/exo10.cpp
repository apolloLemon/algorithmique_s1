#include <iostream>
#include <array>
#include <string>

int main() {
	const int buff = 3;
	bool mirroir = true;

	std::array<int, buff> T1;
	std::array<int, buff> T2;

	std::cout << "Entrez les valeurs du premier tableau"<<std::endl;;
	for(int i=0; i<buff; i++) {
		std::cin >> T1[i];
	}
	std::cout << "Entrez les valeurs du deuxieme tableau"<<std::endl;;
	for(int i=0; i<buff; i++) {
		std::cin >> T2[i];
	}


	for(int i=0; i<buff; i++){
		if (T1[i] != T2[buff-i-1]) {
			mirroir = false;
			break;
		}
	}

	std::string rep = (mirroir) ? " sont " : " ne sont pas ";

	std::cout << "Les deux tableaux" << rep << "mirroir" << std::endl;

	return 0;
}