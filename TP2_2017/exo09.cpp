#include <iostream>
using namespace std;

int main () {
	int num, min, max;
	cin >> num >> min >> max;

	for(int i=0;i<num;i++){
		cout << rand()%(max+1-min)+min<<endl;
	}

	return 0;
}