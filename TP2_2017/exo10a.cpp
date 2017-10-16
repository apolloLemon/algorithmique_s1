#include <iostream>
#include <string>

using namespace std;

string pallindromeCheck (string word) {
	int wordLength = word.length();

	for (int i=0; i<wordLength/2; i++) {
		if (word[i] != word[wordLength-i-1]) {
			return " not ";
		}
	}
	return " ";
}

int main () {
	string word;
	cin >> word;

	cout << word << " is" << pallindromeCheck(word) << "a pallindrome" << endl;

	return 0;
}