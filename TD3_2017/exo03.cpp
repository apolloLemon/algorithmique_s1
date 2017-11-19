#include <iostream>
#include <array>

using namespace std;

const unsigned int maxage = 120; //a
using TabAges = array<int, maxage>;
TabAges ages;

void init () { //b
	ages = {0};
}

void saisie () { //c
	unsigned int n,x;
	cout << "combien d\'individues a saisir l\'age: ";
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >>x;
		if(x<maxage) ages[x]++;
	}
}

float moyenne (TabAges a) { //d
	int individues, age_total;
	for(int i=0;i<maxage;i++) {
		age_total += i*a[i];
		individues += a[i];
	}
	//cout << age_total << " " << individues; //++ this line, --(float)for individues has same result
	return (float)age_total/(float)individues;
}

int main () {
	init();
	saisie();
	cout << "age moyen = " << moyenne(ages)<<endl;
	return 0;
}