#include <iostream>
#include <string>
using namespace std;

bool est_bissextile (int y) {
	if(date%400==0){
		return 1;
	} else if (date%4==0 && date%100!=0){
		return 1;
	} else return 0;
}

int main () {

	return 0;
}