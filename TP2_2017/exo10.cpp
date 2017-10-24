#include <iostream>
#include <string>

using namespace std;

string pallindromeCheck (string word) {
	string nospaces = "";
	for(unsigned int i=0; i<word.length(); i++){
		if(word[i]!= ' '){
			nospaces += word[i];
		}
	}

	for (unsigned int i=0; i<nospaces.length()/2; i++) {
		if (nospaces[i] != nospaces[nospaces.length()-i-1]) {
			return " not ";
		}
	}
	return " ";
}

int main () {
	string word;
	getline(cin, word);

	cout << word << " is" << pallindromeCheck(word) << "a pallindrome" << endl;

	return 0;
}