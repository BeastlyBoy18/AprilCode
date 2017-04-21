#include <iostream>
using namespace std;
#include <cstdlib>
#include<ctime>


void colorshift();

int main() {
	srand(static_cast<unsigned int>(time(0)));
	while (1) {
		colorshift();
		system("pause");
	}

}
void colorshift() {
	int num = rand() % 100 + 1;
	if (num <= 25) {
		system("Color 10");
		cout << "Blue" << endl;
	}
	if (num >= 26 && num <=50) {
		system("Color 20");
		cout << "Green" << endl;
	}
	if (num > 51) {
		system("Color 40");
		cout << "Red" << endl;
	}

}