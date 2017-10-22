#include <iostream>
#include <string>

using namespace std;

int	main() {
	
	string usrinpt;
	string aera="", comp="", corr="";
	getline(cin, usrinpt);

	int usrinptLength = usrinpt.length(); 

	for(int i=0; i<usrinptLength; i++) {
		aera += usrinpt[i];
		aera += ' ';

		if(usrinpt[i] != ' ') {
			comp += usrinpt[i];
		}

		if(usrinpt[i]==' ' && usrinpt[i-1]==' '){
			continue;
		} else corr += usrinpt[i];
	}


	cout << aera << endl << comp << endl << corr << endl;

	return 0;
}