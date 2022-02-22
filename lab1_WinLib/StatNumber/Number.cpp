#include "Number.h"


Number::Number():value(0){}

Number::Number(double value_):value(value_){}

Number Number::operator+(Number other)
{
	return Number(value + other.value);
}

Number Number::operator-(Number other)
{
	return Number(value - other.value);
}

Number Number::operator*(Number other)
{
	return Number(value * other.value);
}

Number Number::operator/(Number other)
{
	return Number(value / other.value);
}

Number Number::numSqrt()
{
	return Number(sqrt(value));
}

double Number::getValue()
{
	return value;
}


Number ZERO_NUM(0);
Number ONE_NUM(1);

Number makeNum(double value_)
{
	return Number(value_);
}
