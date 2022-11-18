#include <iostream>
#include "Point.hpp"
using namespace std;

int main() {
	Point p0;
	Point p1(-7,12);
	Point *p2 = new Point(7,-12);
	cout << "Point p1: " << p1 << " das war's!"<< endl;
	cout << "Point *p2: " << *p2 << endl;
	cout << "Bitte x und y mit Leerzeichen dazwischen eingeben: ";
	cin >> p0 ;
	while(p0.getX() > 9 || p0.getY() > 9){
		cout << "Bitte nur einstellige Werte für X und Y angeben!" << endl;
		cout << "Bitte x und y mit Leerzeichen dazwischen eingeben: ";
		cin >> p0;
	}
	cout << "Eingegebener Punkt p0: " << p0 << endl;
	return 0;
}
