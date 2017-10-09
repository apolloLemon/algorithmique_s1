#include <iostream>

using namespace std;

bool bisex (int date) {
	if(date%400==0){
		return true;
	} 
	if (date%4==0 && date%100!=0){
		return true;
	}
	return false;
}

int main () {
	int j,m,a,mtype;
	cout << "Entrez une date valide avec le format jj mm aaaa :: ";
	cin >> j >> m >> a;

	if (m<1 && m>12) {
		cout << "Mois invalide";
		return 0;
	}
	
	if (m==2) {
		mtype = 28+bisex(a);
	} else if (m<8 && m%2!=0) {
		mtype = 31;
	} else if (m<=8 && m%2==0){
		mtype = 31;
	}else mtype = 30;
 
	if (j<=mtype && j>0) {
		cout << "Date Valide";
	} else cout<< "Date Invalide";
	
	cout << endl;
	return 0;
}
