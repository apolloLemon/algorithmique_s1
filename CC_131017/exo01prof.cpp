#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {
	int s1=0,s2=0,s3=0,d1,d2,d3;
	int dicesize = 9, winscore = 8;
	srand(time(NULL));

	while(s1<winscore && s2<winscore && s3<winscore) {
		d1=rand()%dicesize+1;
		d2=rand()%dicesize+1;
		d3=rand()%dicesize+1;

		std::cout << "\nScores avent tirage: S1="<<s1<<", S2="<<s2<<", S3="<<s3<<std::endl;
		std::cout << "Tirage: D1="<<d1<<", D2="<<d2<<", D3="<<d3<<std::endl;

		if (d1>d2){
			if(d1>d3){
				s1 ++;
				std::cout << "Joueur 1 marque un point!\n";
			} else if (d1==d3) {
				d1=rand()%dicesize+1;
				d3=rand()%dicesize+1;
				std::cout << "Joueur 1 et 3 execo\nTirage: D1="<<d1<<", D3="<<d3<<std::endl;
				if(d1>d3) {
					s1 ++;
					std::cout << "Joueur 1 marque un point!\n";
				} else if (d1<d3) {
					s3 ++;
					std::cout << "Joueur 3 marque un point!\n";
				} else std::cout << "Personne ne marque de points!\n";
			}
		} else if (d2>d3){
			if(d2>d1){
				s2 ++;
				std::cout << "Joueur 2 marque un point!\n";
			} else if (d2==d1) {
				d2=rand()%dicesize+1;
				d1=rand()%dicesize+1;
				std::cout << "Joueur 1 et 2 execo\nTirage: D1="<<d1<<", D2="<<d2<<std::endl;
				if(d1>d2) {
					s1 ++;
					std::cout << "Joueur 1 marque un point!\n";
				} else if (d1<d2) {
					s2 ++;
					std::cout << "Joueur 2 marque un point!\n";
				} else std::cout << "Personne ne marque de points!\n";
			}
		} else if (d3>d1){
			if(d3>d2){
				s3 ++;
				std::cout << "Joueur 3 marque un point!\n";
			} else if (d3==d2) {
				d3=rand()%dicesize+1;
				d2=rand()%dicesize+1;
				std::cout << "Joueur 2 et 3 execo\nTirage: D2="<<d2<<", D3="<<d3<<std::endl;
				if(d2>d3) {
					s2 ++;
					std::cout << "Joueur 2 marque un point!\n";
				} else if (d2<d3) {
					s3 ++;
					std::cout << "Joueur 3 marque un point!\n";
				} else std::cout << "Personne ne marque de points!\n";
			}
		} else std::cout << "Personne ne marque de points!\n";
	}
	std::cout <<"\n---------------------------------------"<< std::endl;		
	if(s1==winscore) std::cout << "           Joueur 1 Gagne!";
	else if(s2==winscore) std::cout << "           Joueur 2 Gagne!";
	else std::cout << "           Joueur 3 Gagne!";
	std::cout <<"\n---------------------------------------"<< std::endl;
	return 0;
}