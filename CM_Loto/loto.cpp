//Dans les rappels
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>


//1
const int ValMax = 49;
const int Taille = 5;
using grille = std::array<unsigned int, Taille>;

//2
void saisie (grille &a) {
	for(int i=0;i<Taille;i++){
		bool saisieCorrect = false;
		while(!saisieCorrect){
			int b;
			std::cout <<"numero "<<i+1<<" : ";
			std::cin >> b;
			if(b>0 && b<=ValMax){
				a[i]=b;
				saisieCorrect=true;
			} else {
				std::cout<<"Incorrect, les numeros doivent etres compris entre 1 et "<<ValMax<<std::endl;
			}
		}
	}
}

//3
void affiche (grille a) {
	for(int i=0;i<Taille;i++){
		std::cout<<a[i]<<" ";
	}
	std::cout<<std::endl;
}

//4
int aleatoire (int min, int max) {
	return rand()%(max+1-min)+min;
}

//5
void grilleAleatoire (grille &a) {
	for(int i=0;i<Taille;i++){
		a[i]=aleatoire(1,ValMax);
	}
}

//6
bool grilleValide (grille a) {
	for(int i=0;i<Taille;i++){
		for(int j=i+1;j<Taille;j++){
			if (a[i]==a[j]) return false;
		}
	}
	return true;
}

//7
int similarites (grille a, grille b) {
	int simil = 0;
	for(int i=0;i<Taille;i++){
		for(int j=0;j<Taille;j++){
			if(a[i]==b[j]){
				simil++;
				break;
			}
		}
	}
	return simil;
}

//8
int main () {
	grille joueur, jeu;
	std::cout<<"Parametres de la partie : numeros entre 1 et "<<ValMax<<", grilles de taille "<<Taille<<std::endl;
	std::cout<<"Entrez vos numeros:\n";
	do{
		saisie(joueur);
	}while(!grilleValide(joueur));
	std::cout<<"Votre grille :: "; affiche(joueur);
	do{
		grilleAleatoire(jeu);
	}while(!grilleValide(jeu));
	std::cout<<"Tirage       :: "; affiche(jeu);
	std::cout<<similarites(joueur,jeu)<<" bon(s) numero(s)\n";
}