#include <iostream>
#include <string>
using namespace std;

bool est_bissextile (int y) {
	if(y%400==0){
		return 1;
	} else if (y%4==0 && y%100!=0){
		return 1;
	}
	return 0;
}

int nb_jours_dans_mois (unsigned int m, int y) {
	if (m==2) {
		return 28+est_bissextile(y);
	} else if (m<8 && m%2!=0) {
		return 31;
	} else if (m>=8 && m%2==0){
		return 31;
	}
	return 30;
}

int nb_jours_dans_mois (unsigned int m) {
	if (m==2) cout << "Fevrier a besoin de l'annee pour etre exacte\n";
	return nb_jours_dans_mois(m, 1);
}

bool jour_valide (unsigned int d, unsigned int m, int y) {
	if (d<=nb_jours_dans_mois(m,y)) return 1;
	return 0;
}
bool mois_valide (unsigned int m) {
	if(m<13) return 1;
	return 0;
}

bool date_valide (unsigned int d, unsigned int m, int y) {
	return jour_valide(d,m,y)*mois_valide(m);
}

string datestring (int d, int m, int y){
	string s=to_string(d);
	s+='/';
	s+=to_string(m);
	s+='/';
	s+=to_string(y);
	return s;
}

string nextday (int d, int m, int y) {
	string outString = "";
	if (!date_valide(d,m,y)) return "Date non valide";
	if (date_valide(d+1,m,y)) return datestring(d+1,m,y);
	if (date_valide(1,m+1,y)) return datestring(1,m+1,y);
	return datestring(1,1,y+1);
}

int main () {
	int d, m, y;
	cin >> d >> m >> y;
	cout << nextday(d,m,y) << endl;
	return 0;
}