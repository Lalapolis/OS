#pragma once
#include "cmath"
class Number {
	double value;

public:
	Number();
	Number(double value_);

	Number operator+(Number other);
	Number operator-(Number other);
	Number operator*(Number other);
	Number operator/(Number other);

	Number numSqrt();
	double getValue();


};


extern Number ZERO_NUM;
extern Number ONE_NUM;

Number makeNum(double value_);