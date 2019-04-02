#include "PVector.h"
#include <cmath>

PVector::PVector(int x, int y) : x(x), y(y), angle(atan(y/x)){
	calcMagnitude(x, y);
}

void PVector::add(int x, int y){
	this->x += x;
	this->y += y;
	calcMagnitude(this->x, this->y);
}

void PVector::add(const PVector &point){
	add(point.x, point.y);
}

void PVector::set(const PVector &vector){
	set(vector.x, vector.y);
}

void PVector::setMagnitude(int magnitude){
	this->magnitude = magnitude;
	x = sqrt(pow(this->magnitude, 2) - pow(y, 2));
	y = sqrt(pow(this->magnitude, 2) - pow(x, 2));
}

void PVector::setAngle(int angle){
	x = magnitude * cos(angle);
	y = magnitude * sin(angle);
	calcMagnitude(x, y);
}

int PVector::getX() const{
	return x;
}

int PVector::getY() const{
	return y;
}

PVector &PVector::operator += (const PVector &rhs){
	x += rhs.x;
	y += rhs.y;
	calcMagnitude(x, y);

	return *this;
}

void PVector::calcMagnitude(int newX, int newY){
	magnitude = sqrt(pow(newX, 2) + pow(newY, 2));
}

void PVector::set(int x, int y){
	this->x = x;
	this->y = y;
	calcMagnitude(this->x, this->y);
}
