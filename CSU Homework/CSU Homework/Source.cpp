#include <iostream>
using namespace std;
void show_menu();
void show_title_given_year(int year);
void show_age_given_index(int index);
int main() {
	int index, year;
	char request = 'a';
	while (request != 'q') {
	cout << "What would you like to do?" << endl;

	cin >> request;
	if (request == 'h') {
		show_menu();
	}
	else if (request == 'y') {
		cout << "enter year" << endl;
		cin >> year;
		show_title_given_year(year);
	}
	else if (request == 'i') {
		cout << "enter index" << endl;
		cin >> index;
		show_age_given_index(index);
	}
}




}
void show_menu() {
	cout << "Press h for Help" << endl;
	cout << "Press q for quit" << endl;
	cout << "Press y to enter year" << endl;
	cout << "Press i to enter an index" << endl;
}
void show_title_given_year(int year) {
	
	switch (year) {
	case 1900:
		cout << "The Wonderful Wizard Of Oz." << endl;
		break;
	case 1904:
		cout << "The Marvelous Land Of Oz." << endl;
		break;
	case 1907:
		cout << "Ozma Of Oz." << endl;
		break;
	case 1908:
		cout << "Dorthy And The Wizard In Oz." << endl;
		break;
	case 1909:
		cout << "The Road To Oz." << endl;
		break;
	case 1910:
		cout << "The Emerald City Of Oz." << endl;
		break;
	case 1913:
		cout << "The Patchwork Girl Of Oz." << endl;
		break;
	case 1914:
		cout << "Tik-Tok Of Oz." << endl;
		break;
	case 1915:
		cout << "TheScarecrow Of Oz." << endl;
		break;
	case 1916:
		cout << "Rinkiting In Oz." << endl;
		break;
	case 1917:
		cout << "The Lost Princess Of Oz." << endl;
		break;
	case 1918:
		cout << "The Tin Woodman Of Oz." << endl;
		break;
	case 1919:
		cout << "The Magic Of Oz." << endl;
		break;
	case 1920:
		cout << "Glinda Of Oz." << endl;
		break;
	default:
		cout << "not an option" << endl;
	}
	

	}
void show_age_given_index(int index) {

	int years[14] = { 117,113,110,109,108,107,104,103,102,101,100,99,98,97 };
	cout << years[index+1];
}
