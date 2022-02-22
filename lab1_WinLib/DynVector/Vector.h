#pragma once
#include <Number.h>

#ifdef DYNVECTOR_EXPORTS
#define DYNVECTOR_API __declspec(dllexport)
#else
#define DYNVECTOR_API __declspec(dllimport)
#endif


class DYNVECTOR_API Vector {
	Number x;
	Number y;
public:

	Vector();
	Vector(Number x_, Number y_);


	Vector Add(Vector other);

	Number calcRadius();
	Number clacAngel();

};


extern Vector ZERO_VEC;
extern Vector ONE_VEC;