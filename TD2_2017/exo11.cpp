#include <iostream>
#include <string>

using namespace std;

int main () {
	int letters[26]={0};
	string usrin;
	getline(cin,usrin);

	char wanted;
	cin >> wanted;
	int wantedI = tolower(wanted)-97;

	for(int j=0;j<usrin.size();j++){
		unsigned int usrinI = tolower(usrin[j])-97;
		if(usrinI<26) letters[usrinI]++;
	}

	cout <<"There are "<< letters[wantedI] <<" "<< wanted << endl;

	return 0;
}