#include <iostream>
#include <string>

using namespace std;

int main () {
	string usrin[2];
	int letters[26]={0};
	for (int i=0;i<2;i++) getline(cin,usrin[i]);

	for(int i=0;i<2;i++){
		for(int j=0;j<usrin[i].size();j++){
			unsigned int usrinI = tolower(usrin[i][j])-97;
			if(usrinI<26) letters[usrinI]++;
		}
	}

	for(int i=0;i<26;i++){
		if(letters[i]%2!=0) {
			cout << "not anagram"<<endl;
			return 0;
		}
	}
	cout << "anagram"<<endl;
	return 0;
}