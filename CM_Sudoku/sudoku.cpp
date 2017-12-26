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

//2.a
bool verif_ligne(sudoku a,int val,int ligne) {
	for(int i=0;i<gridSize;i++){
		if(a[ligne][i]==val) return true;
	}
	return false;
}

//2.b
bool verif_col(sudoku a,int val,int col) {
	for(int i=0;i<gridSize;i++){
		if(a[i][col]==val) return true;
	}
	return false;
}

//Tester Main
int main () {
	sudoku S;
	init(S);
	affiche(S);
}