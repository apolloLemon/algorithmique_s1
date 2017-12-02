//je met l'include pour pouvoir tester dans le compilateur
#include <array>
#include <iostream>

//definit dans l'ennonce
const int Taille = 10;
using tablo = std::array<int, Taille>;

//1
int maximale (tablo T) {
	int max = T[0];
	for(int i=1;i<Taille;i++){
		if(T[i]>max) max = T[i];
	}
	return max;
}

//2
bool Plus_grand_1 (tablo T1, tablo T2) {
	return (maximale(T1)>=maximale(T2));
}

//3
bool Plus_grand_2 (tablo T1, tablo T2) {
	if(maximale(T1)>maximale(T2)) return 1;
	if(maximale(T1)==maximale(T2)) {
		int mT1=0, mT2=0, m=maximale(T1);
		for(int i=0;i<Taille;i++){
			if(T1[i]==m) mT1++;
			if(T2[i]==m) mT2++;
		}
		return (mT1>=mT2);
	}
	return 0; //il est possible qu'il soit inutile, mais c'est plus sur d'avoir un return sans aucune conditions pour l'atteindre. 
}

//4
bool Plus_grand_3 (tablo T1, tablo T2) {
	int a=0;
	for(int i=0;i<Taille;i++) {
		if(T1[i]>=T2[i]) a++;
	}
	return (a==Taille);
}

/*
*/
int main () {
	tablo T1, T2;
	std::cout << "Entrez les valeurs de T1 une a une, ou separee d'espaces (10 valeurs)\n";
	for(int i=0;i<Taille;i++) std::cin >> T1[i];
	std::cout << "Entrez les valeurs de T2 une a une, ou separee d'espaces (10 valeurs)\n";
	for(int i=0;i<Taille;i++) std::cin >> T2[i];
	int foisqueT1estplusgrandqueT2 = Plus_grand_1(T1,T2)+Plus_grand_2(T1,T2)+Plus_grand_3(T1,T2);
	std::cout << foisqueT1estplusgrandqueT2 << std::endl;
}