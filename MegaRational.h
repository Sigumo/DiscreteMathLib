#ifndef MEGA_RATIONAL
#define MEGA_RATIONAL

#include "MegaInteger.h"

using namespace std;

class MegaRational
{
public:
	MegaRational();
	MegaRational(MegaInteger a);

	~MegaRational();

	//ќписание: сокращение дроби
	void reduction();
	//ќписание: проверка, ¤вл¤етс¤ ли число целым
	bool isInteger();
	MegaInteger toMegaInteger();

	friend bool operator ==(const MegaRational &ob1, const MegaRational &ob2);
	friend bool operator !=(const MegaRational &ob1, const MegaRational &ob2);
	friend bool operator <=(const MegaRational &ob1, const MegaRational &ob2);
	friend bool operator >=(const MegaRational &ob1, const MegaRational &ob2);
	friend bool operator <=(const MegaRational &ob1, const MegaRational &ob2);
	friend bool operator >=(const MegaRational &ob1, const MegaRational &ob2);
	friend MegaRational operator +(const MegaRational &ob1, const MegaRational &ob2);
	friend MegaRational operator -(const MegaRational &ob1, const MegaRational &ob2);
	friend MegaRational operator *(const MegaRational &ob1, const MegaRational &ob2);
	friend MegaRational operator /(const MegaRational &ob1, const MegaRational &ob2);
	friend MegaRational operator %(const MegaRational &ob1, const MegaRational &ob2);
	friend MegaRational operator -(const MegaRational ob);

	MegaRational& operator =(MegaRational &ob);
private:
	MegaInteger numerator;
	MegaNatural denominator;
};

#include "MegaRational.cpp"

#endif MEGA_RATIONAL