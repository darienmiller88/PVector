#pragma once

/*
* "PVector" stands for "physics vector", and denotes an object which is meant to represent a quantity that has a magt=nitude and a direction.
* x and y will represent the x and y components of the vector;
*/
class PVector{
	public:
		PVector(int x, int y);//construct one from a x and y component
		void add(int x, int y = 0);
		void add(const PVector &vector);
		void set(int x, int y = 0);
		void set(const PVector &vector);
		void setMagnitude(int magnitude);
		void setAngle(int angle);
		int getX() const;
		int getY() const;
		PVector &operator += (const PVector &rhs);
	private:
		int x, y, angle, magnitude;
		void calcMagnitude(int newX, int newY);
};

