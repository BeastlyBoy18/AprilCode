#include <iostream>
using namespace std;

double nukeDamage(double o, double a);

int main() {
	double attack = 800;
	double orb = 400;
	cout << nukeDamage(orb, attack) << endl;

}
double nukeDamage(double o, double a) {
	double damage;
	damage = (a*(1 + 0.3*o)) + 3000;

	return damage;
}
