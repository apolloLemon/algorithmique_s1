#include <iostream>
#include <array>
using namespace std;
const unsigned int buffSize=512;
using platojeu = array<char, buffSize>;

bool gagne (platojeu a, int b) {

}

void init (platojeu &a, int b) {
	a[b] = {'X'};
	for(int i=0;i<b;i++){
		a[i]='B';
	}
	for(int i=b*2;i>b;i--){
		a[i]='N';
	}
}

void afficher (platojeu a, int b) {
	for(int i=0;i<b;i++) {
		cout << a[i];
	}
}

int main () {
	platojeu jeu;
	unsigned int sheepcount, gamesize;
	cin >> sheepcount; 
	if(sheepcount>20) sheepcount=20; gamesize = 2*sheepcount+1;

	init(jeu, sheepcount);
	afficher(jeu, gamesize);

	cout << endl;
	return 0;
}