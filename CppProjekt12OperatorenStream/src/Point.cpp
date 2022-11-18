#include "Point.hpp"
#include <iostream>
using namespace std;

// Point:: vor Konstruktor oder Methodennamen ist der Scope (Gueltigkeitsbereich) der Methode.
// Sagt aus: Konstruktor oder Methode gehoert zu Klasse Point 
Point::Point(int x, int y) {
	Point ::x=x;
	Point ::y=y;
	cout << "Voll qual. Constructor " << endl;
}

Point::Point(const Point &p) {
  Point ::x = p.getX();
  Point ::y = p.getY();
  cout << "Copy Constructor " << endl;
}

Point :: ~Point(){
	cout << "Destructor " << endl;
}

int Point :: getX() const{
	return x;
}

int Point :: getY() const{
	return y;
}

void Point :: setX(int x) {
	this->x = x;
}

void Point ::setY(int y) {
	this->y = y;
}

void normaleFunktion() {
	cout << "Ich bin eine normale Funktion, keine Methode" << endl;
}

ostream & operator << (std::ostream &out, Point &p) {
	out << "[" << p.getX() << " " << p.getY() << "]"; // kein endl;
	return out;
}

istream & operator >> (std::istream &in, Point &p) {
	int x, y;
	in >> x >> y;
	p.setX(x);
	p.setY(y);
	return in;

}

