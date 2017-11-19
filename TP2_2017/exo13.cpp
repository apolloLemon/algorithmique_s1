#include <iostream>
#include <string>

using namespace std;

int main () {
	string sol, myst; 
	char guess, wguess[26];
	int wordsize, lives, maxlives;

	cin >> sol;
	system("clear");

	wordsize = sol.size();
	maxlives = 1+wordsize+(wordsize/4);
	lives = maxlives;
	myst = sol;
	for(int i=0; i<wordsize;i++){
		myst[i]='_';
	}

	do{
		bool looselife = true;
		cout << myst << " (lives="<<lives<<")"<< endl;
		cin >> guess;
		for(int i=0; i<maxlives; i++){
			if(guess==wguess[i]) {
				looselife=false;
			}
		}

		for(int i=0; i<wordsize;i++){
			if(tolower(sol[i])==tolower(guess)) {
				myst[i]=sol[i];
				looselife = false;
			}
		}
		if(sol==myst) {
			cout << sol<<"\nYou win" << endl;
			return 0;
		}
		if(looselife) {
			lives--;
			wguess[(lives-maxlives)*-1]=guess;
		}
	} while (lives>=0);
	cout << "You loose" << endl;

	return 0;
}