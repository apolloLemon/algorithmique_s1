//Dans les rappels
#include <iostream>
#include <array>
#include <ctime>
#include <cstlib>


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