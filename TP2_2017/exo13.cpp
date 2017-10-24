#include <iostream>
#include <string>

using namespace std;

int main () {
	string sol, myst;
	char guess;
	int wordsize, lives;

	cin >> sol;
	system("clear");

	wordsize = sol.size();
	lives = 3+(wordsize/4);
	myst = sol;
	for(int i=0; i<wordsize;i++){
		myst[i]='_';
	}

	do{
		bool goodGuess = false;
		cout << myst << " (lives="<<lives<<")"<< endl;
		cin >> guess;
		for(int i=0; i<wordsize;i++){
			if(tolower(sol[i])==tolower(guess)) {
				myst[i]=sol[i];
				goodGuess = true;
			}
		}
		if(sol==myst) {
			cout << sol<<"\nYou win" << endl;
			return 0;
		}
		if(!goodGuess) lives--;
	} while (lives>=0);
	cout << "You loose" << endl;

	return 0;
}