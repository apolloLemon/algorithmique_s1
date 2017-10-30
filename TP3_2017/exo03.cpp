#include <iostream>
#include <string>
using namespace std;

void copy () {
	string line1 = askforline("line to copy from");
	unsigned int from=-1, size=-1;
	unsigned linesize = line1.size();
	while(from>linesize) from = askforint("From Position");
	while(size>linesize-from+1) size = askforint("Number of characters");
	string line2 = getcopy(line1,from,size);
	cout<<line2<<endl;
}

string getcopy (string instr,int pos,int size) {
	string outstring = "";
	int start = pos-1;
	int end = pos+size-1;
	for(int i=start;i<end;i++){
		outstring += instr[i];
	}
	return outstring;
}

string askforline (int linenum) {
	string usrin = "";
	cout << "Please write line "<<linenum<<":\n>> ";
	cin.ignore(); getline(cin, usrin);
	return usrin;
}

string askforline (string title) {
	string usrin;
	cout << "Please write "<<title<<":\n>> ";
	cin.ignore(); getline(cin,usrin);
	return usrin;
}

int askforint (string name) {
	unsigned int usrin;
	cout << name << " (int):\n>> ";
	cin >> usrin;
	return usrin;
}

int choosemode () {
	unsigned int mode;
	cout << "Choose mode:\n 1=copy\n 2=remove\n 3=insert\n 4=pos\n>> ";
	cin >> mode;
	if (mode<=4) return mode;
	return 0;
}

int main () {
	int mode=0;
	while(!mode){
		mode = choosemode();
	}
	switch (mode) {
		case 1:
			copy();
			break;
		default:
			cout << "som't wrong..";
			break;
	}	

	return 0;
}