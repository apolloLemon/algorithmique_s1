#include <iostream>
#include <array>

using namespace std;

const unsigned int buffSize=512;
using platojeu = array<char, buffSize>;
platojeu jeu;
unsigned int gamesize;

void init () {
	cin >> gamesize;
	if(gamesize>20) gamesize=20;
	jeu = {'X'};
	for(int i=0;i<gamesize;i++){
		jeu[i]='B';
	}
	for(int i=gamesize*2;i>gamesize;i--){

	}
}

int main () {

	return 0;
}