#include "Vector.h"


Vector::Vector():x(ZERO_NUM),y(ZERO_NUM){}

Vector::Vector(Number x_, Number y_) : x(x_), y(y_){}

Vector Vector::Add(Vector other)
{
	return Vector(x+other.x,y+other.y);
}

Number Vector::calcRadius(){
	return Number((x*x + y*y).numSqrt());
}

Number Vector::clacAngel(){
	return Number(atan((x/y).getValue()));
}

Vector ZERO_VEC(0,0);
Vector ONE_VEC(1,1);

