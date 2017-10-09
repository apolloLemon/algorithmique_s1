#include <iostream>

using namespace std;

int main (){
	cout << "saisir vos notes une par une puis finir par -1" << endl;
	double note(0), somme(0), moyenne, i(0);
	while(note!=-1){
		cin >> note;
		if (note >= 0 && note <= 20){
			somme+=note;     
			i++;
		} else {
			cout << "nop" << endl;
		}
	}
	moyenne = somme / i;
        cout << "la moyenne de vos notes est : " << moyenne << endl;
	return 0;
}
