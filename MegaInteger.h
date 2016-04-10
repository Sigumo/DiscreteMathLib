#ifndef MEGA_INTEGER
#define MEGA_INTEGER

#include "MegaNatural.h"
#include <string>

using namespace std;

class MegaInteger 
{
public:
	MegaInteger();
	MegaInteger(MegaNatural &ob);
	MegaInteger(MegaInteger &ob);
	MegaInteger(long long a);
	MegaInteger(string);
	~MegaInteger();

	//Описание: модуль числа
	MegaInteger abs();
	//Описание: преобразование целого в натуральное
	MegaNatural toMegaNatural();
	string toString();

	//MegaInteger& operator =(MegaInteger &ob);

	friend MegaInteger operator ==(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator!=(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator <(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator >(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator <=(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator >=(const MegaInteger &ob1, const MegaInteger &ob2);

	friend MegaInteger operator %(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator *(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator /(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator +(const MegaInteger &ob1, const MegaInteger &ob2);
	friend MegaInteger operator -(const MegaInteger &ob1, const MegaInteger &ob2);
private:
	MegaNatural num;
	bool isNegative;
};

#include "MegaInteger.cpp"

#endif
