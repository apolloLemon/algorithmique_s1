#include <iostream>
#include <array>

//1.1
const unsigned int gridSize = 9;
using ligne = std::array<unsigned int, gridSize>;
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

//3.1
void saisie(sudoku &a) {
	bool saisieFini = false;
	while(!saisieFini){
		unsigned int val, x, y;
		std::cout<<"Entrez valeur, coor x et coor y separees d'espaces\nvaleur_a_enter coord_x coord_y :: ";
		std::cin>>val>>x>>y;
		if(val>9 || val==0 || x >=9 || y >=9) {
			std::cout<<"\nValeur, x ou y incorrect. ";
			continue;
		}
		if(verif_ligne(a,val,y) || verif_col(a,val,x)) {
			std::cout<<"\nLigne ou Colone deja occupe. ";
			continue;
		}
		a[y][x]=val;
		saisieFini = true;
	}	 
}

//3.2
bool fin (sudoku a){
	for(int i=0;i<gridSize;i++){
		for(int j=0;j<gridSize;j++){
			if (a[i][j]==0) return false;
		}
	}
	return true;
}

//4
int main () {
	sudoku S;
	init(S);
	while(!fin(S)){
		affiche(S);
		saisie(S);
	}
}