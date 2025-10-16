#include "Point.h"

Point::Point(int px, int py) {
	this->x = px;
	this->y = py;
}

int Point::getX() const{
	return x;
}

int Point::getY() const{
	return y;
}

void Point::setX(int px) {
	this->x = px;
}

void Point::setY(int py) {
	this->y = py;
}