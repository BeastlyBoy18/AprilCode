#include <iostream>
using namespace std;

double PokeDamage(double l, double a, double d, double p, double m);

int main() {
	double level, attack, defense, power,modifier;
	cout << "enter Level" << endl;
	cin >> level;
	cout << "enter Attack" << endl;
	cin >> attack;
	cout << "enter Defense" << endl;
	cin >> defense;
	cout << "enter Power" << endl;
	cin >> power;
	cout << "enter Modifier" << endl;
	cin >> modifier;
	cout << PokeDamage(level, attack, defense, power, modifier) << endl;
}
double PokeDamage(double l,double a,double d,double p,double m) {
	double damage;
	damage = ((((((2 * l / 5 + 2)*a*p) / d) / 50) + 2)*m);

	return damage;

}