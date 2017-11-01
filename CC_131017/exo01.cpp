#include <iostream>
#include <ctime>
#include <cmath>

int w (int r1, int r2) {
	int output = 0;
	if(r1==fmax(r1,r2)) output+=1;
	if(r2==fmax(r1,r2)) output+=10;
	return output;
}

int w (int r1, int r2, int r3) {
	int output = 0;
	if(r1==fmax(fmax(r1,r2),r3)) output+=1;
	if(r2==fmax(fmax(r1,r2),r3)) output+=10;
	if(r3==fmax(fmax(r1,r2),r3)) output+=100;
	return output;
}

int random (int max) {
	return rand()%max+1;
}

int main () {
	int s1=0,s2=0,s3=0,r1,r2,r3;
	int dicesize = 9, winscore = 8, wcode;
	srand(time(NULL));

	while(s1<winscore && s2<winscore && s3<winscore) {
		r1=random(dicesize);
		r2=random(dicesize);
		r3=random(dicesize);

		std::cout << "\nScores: J1="<<s1<<", J2="<<s2<<", J3="<<s3<<std::endl;
		std::cout << "Tirage: J1="<<r1<<", J2="<<r2<<", J3="<<r3<<std::endl;

		wcode = w(r1,r2,r3);

		if(wcode==111) continue;
		
		if(wcode==1) {
			std::cout << "J1 gagne\n";
			s1++;
		}
		if(wcode==10) {
			std::cout << "J2 gagne\n";
			s2++;
		}
		if(wcode==100) {
			std::cout << "J1 gagne\n";
			s3++;
		}

		if(wcode==11) {
			std::cout << "J1 = J2"<<std::endl;
			r1=random(dicesize);
			r2=random(dicesize);
			wcode = w(r1,r2);
			std::cout << "Tirage: J1="<<r1<<", J2="<<r2<<std::endl;
			if(wcode==1) {
				std::cout << "J1 gagne\n";
				s1++;
			} else if (wcode==10){
				std::cout << "J2 gagne\n";
				s2++;
			}
		}
		if(wcode==101) {
			std::cout << "J1 = J3"<<std::endl;
			r1=random(dicesize);
			r3=random(dicesize);
			wcode = w(r1,r3);
			std::cout << "Tirage: J1="<<r1<<", J3="<<r2<<std::endl;
			if(wcode==1) {
				std::cout << "J1 gagne\n";
				s1++;
			} else if (wcode==10){
				std::cout << "J3 gagne\n";
				s2++;
			}
		}
		if(wcode==110) {
			std::cout << "J2 = J3"<<std::endl;
			r2=random(dicesize);
			r3=random(dicesize);
			wcode = w(r2,r3);
			std::cout << "Tirage: J2="<<r1<<", J3="<<r2<<std::endl;
			if(wcode==1) {
				std::cout << "J2 gagne\n";
				s1++;
			} else if (wcode==10){
				std::cout << "J3 gagne\n";
				s2++;
			}
		}
	}
	wcode = w(s1,s2,s3);
	if(wcode==1) std::cout << "P1 Win";
	if(wcode==10) std::cout << "P2 Win";
	if(wcode==100) std::cout << "P3 Win";

	std::cout << std::endl;
	return 0;
}