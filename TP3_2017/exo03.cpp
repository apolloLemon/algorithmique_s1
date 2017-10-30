#include <iostream>
#include <string>
using namespace std;

string askforstring (int linenum) {
	string usrin = "";
	cout << "Please write line "<<linenum<<":\n>> ";
	getline(cin, usrin);
	return usrin;
}

string askforstring (string title) {
	string usrin;
	cout << "Please write "<<title<<":\n>> ";
	cin.ignore(); getline(cin,usrin);
	return usrin;
}

int askforint (string name) {
	int usrin;
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

string getcopy (string instr,int pos,int size) {
	string outstring = "";
	int start = pos-1;
	int end = pos+size-1;
	for(int i=start;i<end;i++) outstring += instr[i];
	return outstring;
}

void copy () {
	string line1 = askforstring("line to copy from");
	unsigned int from=-1, size=-1;
	unsigned linesize = line1.size();
	while(from>linesize) from = (unsigned int)askforint("From position");
	while(size>linesize-from+1) size = (unsigned int)askforint("Number of characters");
	string line2 = getcopy(line1,from,size);
	cout<<line2<<endl;
}

string getdel (string instr, int pos, int size) {
	string outstring = "";
	int start = pos-1;
	int end = pos+size-1;
	for (int i=0; i<instr.size();i++){
		if (i<start && i<end) outstring += instr[i];
	}
	return outstring;
}

void del () {
	string line1 = askforstring("line to delete from");
	unsigned int from=-1, size=-1;
	unsigned linesize = line1.size();
	while(from>linesize) from = (unsigned int)askforint("From position");
	while(size>linesize-from+1) size = (unsigned int)askforint("Number of characters");
	string line2 = getdel(line1,from,size);
	cout<<line2<<endl;
}

string getaddstrings (string instr1, string instr2, int pos) {
	string outstring = "";
	if(pos==instr1.size()+1){
		outstring = instr1+instr2;
		return outstring;
	}
	for(int i=0;i<instr1.size();i++){
		outstring += instr1[i];
		if(i==pos-2) outstring +=instr2;
	}
	return outstring;
}

void addstrings () {
	string line1 = askforstring("line 1 in which we'll add 2");
	string line2 = askforstring(2);
	unsigned int from=-1;
	while(from>line1.size()+1) from = (unsigned int)askforint("Add line 2 to line 1 at");
	string line3 = getaddstrings(line1,line2,from);
	cout<<line3<<endl;
}

int main () {
	int mode=0;
	while(!mode) mode = choosemode();
	switch (mode) {
		case 1:
			copy();
			break;
		case 2:
			del();
			break;
		case 3:
			addstrings();
			break;
		default:
			cout << "Only 1 is availiable"<<endl;
			break;
	}	

	return 0;
}