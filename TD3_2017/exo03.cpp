#include <iostream>
#include <array>

using namespace std;

const unsigned int buffSize = 512; //a
using TabAges = array<int, buffSize>;
TabAges ages;

void init () { //b
	ages = {0};
}

int main () {
	
	return 0;
}