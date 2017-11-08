#include <iostream>
#include <array>

int main () {
	//class intArray
	const int buffSize = 1024;
	using intArray = std::array<int, buffSize>;

	//declaration des valeurs
	intArray T;
	intArray Out;
	int n, dernierIndexdeOut=0;

	//collection des veleurs du tableau
	std::cout << "Nombre d'entier a entrer: "<<std::endl;
	std::cin >> n;
	for(int i=0; i<n; i++) {
		std::cout << "Entrez l'entier numero "<< i+1 <<"/"<< n << std::endl;
		std::cin >> T[i];
	} 
	
	//Algo deux tablo
	for(int i=0; i<n; i++){
		for(int j=0; j<dernierIndexdeOut+1; j++) {
			if(T[i]==Out[j]) break;
			Out[dernierIndexdeOut]=T[i];
			dernierIndexdeOut++;
			j=dernierIndexdeOut;
		}
	}

	//Conclusion (pas demande dans l'exo)
	for(int i=0; i<dernierIndexdeOut; i++){
		std::cout << Out[i];
		if (i<n-1) std::cout << ", ";
	}

	//quitter le program
	std::cout << std::endl;
	return 0;
}