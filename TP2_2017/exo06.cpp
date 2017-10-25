#include <iostream>

using namespace std;

int dee() {
	return rand()%6+1;
}

int winner(int sp1, int sp2){
	if(sp1>=5) return 1;
	if(sp2>=5) return 2;
	return 0;
}

int main () {
	int sp1=0,sp2=0, rp1, rp2;

	while(sp1<5&&sp2<5){
		cout << "Press enter to roll (sp1:"<<sp1<<" sp2:"<<sp2<<")\n";
		cin.get();
		srand(time(NULL));
		rp1 = dee();
		rp2 = dee();
		cout << rp1 << " :: "<<rp2<<endl;
		if(rp1-rp2<0){
			sp2++;
		} else if (rp1-rp2>0){
			sp1++;
		}
	}
	cout << "P"<<winner(sp1, sp2)<<" wins (sp1:"<<sp1<<" sp2:"<<sp2<<")\n";

	return 0;
}