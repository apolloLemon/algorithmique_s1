#include <iostream>

int timesIdidnothing = 0;

void donothing () {
	std::cout << ++timesIdidnothing <<std::endl;
}

int main () {
	bool continuer = true;
	unsigned int timestodonothing;
	while(continuer) {
		std::cin >> timestodonothing;
		if (!timestodonothing) continuer = false;
		if (timestodonothing>9999) timestodonothing = 9999; 
		for(int i=0;i<timestodonothing;i++) donothing();
	}

	return 0;
}