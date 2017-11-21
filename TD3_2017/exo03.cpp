#include <iostream>
#include <array>
#include <cmath>

using namespace std;

const unsigned int maxage = 120; //a
using TabAges = array<int, maxage>;

void init (TabAges &ages) { //b
	ages = {0};
}

void saisie (TabAges &ages) { //c
	unsigned int n,x;
	cout << "Nombre d\'individues a saisir l\'age: ";
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >>x;
		if(x<maxage) ages[x]++;
	}
}

int effectif (TabAges a) {
	int rT=0;
	for(int i=0;i<maxage;i++) {
		rT += a[i];
	}
	return rT;
}

float moyenne (TabAges a) { //d
	int individues = effectif(a);
	int rT;
	for(int i=0;i<maxage;i++) {
		rT += i*a[i];
	}
	//cout << rT << " " << individues; //++ this line, --(float)for individues has same result
	return (float)rT/(float)individues;
}

float variance (TabAges a) {
	int rT=0;
	for(int i=0;i<maxage;i++){
		rT += a[i]*pow(i-moyenne(a),2);
	}
	rT/=1/effectif(a);
	return rT;
}

float ecartType (TabAges a) {
	return sqrt(variance(a));
}

int median (TabAges a) {

}

int main () {
	TabAges ages;
	init(ages);
	saisie(ages);
	cout << "age moyen = "<<moyenne(ages)<<"\nadrs de age="<<&ages<<endl;
	return 0;
}