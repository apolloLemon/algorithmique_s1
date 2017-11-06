#include <iostream>
#include <string>
using namespace std;

bool est_bissextile (int y) {
	if(date%400==0){
		return 1;
	} else if (date%4==0 && date%100!=0){
		return 1;
	} else return 0;
}

int nb_jours_dans_mois (int m, int y) {
	if (m==2) {
		return 28+bisex(y);
	} else if (m<8 && m%2!=0) {
		return 31;
	} else if (m<=8 && m%2==0){
		return 31;
	}else return 30;
}

int main () {

	return 0;
}