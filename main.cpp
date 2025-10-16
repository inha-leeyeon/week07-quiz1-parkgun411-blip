#include"Square.h"
#include<iostream>
#include<algorithm>
using namespace std;

bool Compare_1(Square s1, Square s2) {
	return s1.getArea() < s2.getArea();
}

bool Compare_2(Square s1, Square s2) {
	return (s1.getX() + int(s1.getSide())) < (s2.getX() + int(s2.getSide()));
}

bool Compare_3(Square s1, Square s2) {
	return (s1.getY() + int(s1.getSide())) < (s2.getY() + int(s2.getSide()));
}

int main() {
	Square square[5] = { Square("",0,0),Square("",0,0),Square("",0,0) ,Square("",0,0) ,Square("",0,0) };
	for (auto& sq : square) {
		string name; int x, y, side;
		cin >> name >> x >> y >> side;
		sq.setName(name);
		sq.setSide(side);
		sq.setArea(side);
		sq.setX(x);
		sq.setY(y);
	}

	cout << "\nSquares in incresing order of area\n";
	sort(square, square + 5, Compare_1);
	for (auto& sq : square) {
		cout << sq.getName() << "(" << sq.getX() << ", " << sq.getY() << ") " << "side=" << sq.getSide() << ", area=" << sq.getArea() << "\n";
	}

	cout << "\nSquare in increasing order of max x-coordinate\n";
	sort(square, square + 5, Compare_2);
	for (auto& sq : square) {
		cout << sq.getName() << "(" << sq.getX()+int(sq.getSide()) << ", " << sq.getY() << ") " << "side=" << sq.getSide() << ", area=" << sq.getArea() << "\n";
	}

	cout << "\nSquare in increasing order of max y-coordinate\n";
	sort(square, square + 5, Compare_3);
	for (auto& sq : square) {
		cout << sq.getName() << "(" << sq.getX() << ", " << sq.getY() + int(sq.getSide()) << ") " << "side=" << sq.getSide() << ", area=" << sq.getArea() << "\n";
	}
}