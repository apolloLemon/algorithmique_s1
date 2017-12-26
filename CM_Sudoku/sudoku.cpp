#include <iostream>
#include <array>

//1.1
const unsigned int gridSize = 9;
using ligne = std::array<int, gridSize>;
using sudoku = std::array<ligne, gridSize>;

//1.2
void init (sudoku &a) {
	a = {0};
}


//1.3
void affiche (sudoku a) {
	for(int i=0;i<gridSize;i++){
		for(int j=0;j<gridSize;j++){
			if(a[i][j]==0) std::cout << "* ";
			else std::cout << a[i][j] << " ";
			if(j==2 || j==5) std::cout << " ";
		}
		std::cout<<std::endl;
		if(i==2 || i==5) std::cout<<std::endl;
	}
}

//Tester Main
int main () {
	sudoku S;
	init(S);
	affiche(S);
}