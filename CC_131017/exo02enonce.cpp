#include <iostream>
#include <array>

int main () {
	//class intArray
	const int buffSize = 1024;
	using intArray = std::array<int, buffSize>;

	//declaration des valeurs
	intArray T;
	int n;

	//collection des veleurs du tableau
	std::cout << "Nombre d'entier a entrer: "<<std::endl;
	std::cin >> n;
	for(int i=0; i<n; i++) {
		std::cout << "Entrez l'entier numero "<< i+1 <<"/"<< n << std::endl;
		std::cin >> T[i];
	} 

	//Algo-enonce
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(T[i]==T[j]) {
				for(int k=j; k<n; k++){
					T[k]=T[k+1];
				}
				j--;
				n--;
			}
		}
	}

	//Conclusion (pas demande dans l'exo)
	for(int i=0; i<n; i++){
		std::cout << T[i];
		if (i<n-1) std::cout << ", ";
	}

	//quitter le program
	std::cout << std::endl;
	return 0;
}