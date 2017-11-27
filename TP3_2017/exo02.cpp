#include <iostream>
#include <array>
#include <string>

using namespace std;
const unsigned int buffSize = 512;	
using TabPrecipitations = array<unsigned int,buffSize>;

int Getint (string name){
	int usrin;
	cout << "Entrez le nombre de valeurs a rentre pour:\n"<<name<<" :: ";
	cin >> usrin;
	return usrin;
}

int Getint (int n){
	int usrin;
	cout << "Quantite de precipitations pour le jour no "<<n<<" :: ";
	cin >> usrin;
	return usrin;	
}

int min (int a, int b){
	if(a<=b) return a;
	return b;
}

int max (int a, int b){
	if(a>=b) return a;
	return b;
}

int minimale (TabPrecipitations in, int size) {
	int Cmin=in[0];
	for(int i=1;i<size;i++) Cmin=min(Cmin,in[i]);
	return Cmin;
}

int maximale (TabPrecipitations in, int size) {
	int Cmax=in[0];
	for(int i=1;i<size;i++) Cmax=max(Cmax,in[i]);
	return Cmax;
}

void GiveMinMax (string name, TabPrecipitations in, int size) {
	cout <<"Max "<<name<<" = "<<maximale(in,size)<<endl;
	cout <<"Min "<<name<<" = "<<minimale(in,size)<<endl;
}

void RemplirTableau (TabPrecipitations &in, int taille) {
	for(int i=0; i<taille;i++){
		in[i]=Getint(i+1);
	}
}

int main () {
	TabPrecipitations Angers, Nantes, Rennes;
	unsigned int As, Ns, Rs;
	char town;
	do {
		cout << "Pour quel ville voulez vous entrez les precipitations?\nA=Angers, N=Nantes, R=Rennes, Z=fin :: ";
		cin >> town;
		town = tolower(town);
		switch(town){
			case 97:
				As = Getint("Angers");
				RemplirTableau(Angers, As);
				GiveMinMax("Angers",Angers,As);
				break;
			case 110:
				Ns = Getint("Nantes");
				RemplirTableau(Nantes, Ns);
				GiveMinMax("Nantes",Nantes,Ns);
				break;
			case 114:
				Rs = Getint("Rennes");
				RemplirTableau(Rennes, Rs);
				GiveMinMax("Rennes",Rennes,Rs);
				break;
			default:
				cout<<"char incorrect"<<endl;
				break;
		}
	} while (town-122);

	cout << endl;
	return 0;
}