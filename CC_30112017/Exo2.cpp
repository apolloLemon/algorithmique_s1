//1
const int maxtrax = 100;
using tab_tracks = std::array<int,maxtrax>;

//2
int saisie (tab_tracks &a) {
	int N;
	cout << "Donner votre nombre de morceaux : ";
	cin >> N;
	for(int i=0;i<N;i++) {
		cout << "Donner la duree en secondes : ";
		cin >> a[i];
	}
	return N;
}

//3
int duree_totale (tab_tracks a,int N){
	int stot = 0;
	for(int i=0;i<N;i++) stot += a[i];
	return stot;
}

//4
bool long_sup_5 (tab_tracks a, int M){
	return (a[M]>5*60);
}

//5
void aff_liste(tab_tracks a, int N, int Dmax) {
	int stot =0;
	for (int i=0;i<N;i++){
		if(stot+a[i]>=Dmax) stot+=a[i];
		cout << i << ' ';
	}
	cout << endl;
}

//6
using tab_titres = std::array<string,maxtrax>;

//7
int saisie (tab_tracks &a, tab_titres &b) {
	int N;
	cout << "Donner votre nombre de morceaux : ";
	cin >> N;
	for(int i=0;i<N;i++) {
		cout << "Donner le titre d'un morceau : ";
		cin >> b[i];
		cout << "Donner sa duree en secondes : ";
		cin >> a[i];
	}
	return N;
}

//8
void affiche_tout (tab_tracks a, tab_titres b, int N) {
	for(int i=0;i<N;i++) {
		cout<< b[i]<<" (duree: "<<a[i]<<" secondes)\n";
	}
}

//9
void aff_lettre (tab_titres a, int N, char L) {
	for(int i=0;i<N;i++){
		if(a[i][0]==L) cout<<a[i]<<endl; 
	}
}