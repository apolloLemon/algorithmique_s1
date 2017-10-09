#include <iostream>

using namespace std;

int main () {

	int date;
	bool bi;

	cout << "Entrez une date : ";
	cin >> date;

	if(date%400==0){
		bi = true;
	} else if (date%4==0 && date%100!=0){
		bi = true;
	} else bi = false;

	if(bi){
		cout << date << " est bi";
	} else cout << date << " n'est pas bi";

	cout << endl;
	return 0;
}