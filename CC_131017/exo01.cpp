//	Ici j'ai repris mon broullion et j'ai essaye de
//	refaire comme j'ai fait durant le CC.
#include <iostream>
#include <ctime>
#include <cmath>

int main () {
	int s1=0,s2=0,s3=0,r1,r2,r3;
	int dicesize = 9, winscore = 8;
	srand(time(NULL));

	while(s1<winscore && s2<winscore && s3<winscore) {
		r1=rand()%dicesize+1;
		r2=rand()%dicesize+1;
		r3=rand()%dicesize+1;

		std::cout << "\nScores: J1="<<s1<<", J2="<<s2<<", J3="<<s3<<std::endl;
		std::cout << "Tirage: J1="<<r1<<", J2="<<r2<<", J3="<<r3<<std::endl;

		if(r1+r2+r3==r1*3) {
			std::cout << "Personne ne Gagne\n";
			continue;
		}

		if(r1>r2 && r1>r3) {
			std::cout << "Jouer 1 Gagne\n";
			s1++;
			continue;
		}
		if(r2>r1 && r2>r3) {
			std::cout << "Jouer 2 Gagne\n";
			s2++;
			continue;
		}
		if(r3>r1 && r3>r2) {
			std::cout << "Jouer 3 Gagne\n";
			s3++;
			continue;
		}
		if(r1==r2) {
			r1=rand()%dicesize+1;
			r2=rand()%dicesize+1;
			std::cout << "Jouers 1 et 2 execo.\nTirage J1="<<r1<<", J2="<<r2<<std::endl;
			if(r1>r2) {
				std::cout << "Jouer 1 Gagne\n";
				s1++;		
			} else if (r2>r1) {
				std::cout << "Jouer 2 Gagne\n";
				s2++;
			}
			continue;
		}
		if(r1==r3) {
			r1=rand()%dicesize+1;
			r3=rand()%dicesize+1;
			std::cout << "Jouers 1 et 3 execo.\nTirage J1="<<r1<<", J3="<<r3<<std::endl;
			if(r1>r2) {
				std::cout << "Jouer 1 Gagne\n";
				s1++;		
			} else if (r2>r1) {
				std::cout << "Jouer 3 Gagne\n";
				s3++;
			}
			continue;
		}
		if(r2==r3) {
			r2=rand()%dicesize+1;
			r3=rand()%dicesize+1;
			std::cout << "Jouers 2 et 3 execo.\nTirage J2="<<r2<<", J3="<<r3<<std::endl;
			if(r1>r2) {
				std::cout << "Jouer 2 Gagne\n";
				s2++;		
			} else if (r2>r1) {
				std::cout << "Jouer 3 Gagne\n";
				s3++;
			}
			continue;
		}
	}
	if(s1==winscore) std::cout << "P1 Win";
	if(s2==winscore) std::cout << "P2 Win";
	if(s3==winscore) std::cout << "P3 Win";

	std::cout << std::endl;
	return 0;
}