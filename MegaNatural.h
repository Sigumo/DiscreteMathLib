#ifndef MEGA_NATURAL_BASE
#define MEGA_NATURAL_BASE

#include <iostream>
#include <malloc.h>
#include <deque>
#include <string>

typedef unsigned char uchar;
using namespace std;

class MegaNatural
{
public:
	MegaNatural();
	MegaNatural(const MegaNatural &ob);
	MegaNatural(string str);
	~MegaNatural();
	
	void mulByTenPowK(long long k);
	long long tenDivisiorCt();

	friend ostream& operator<<(ostream &os, MegaNatural &ob);
	friend bool operator ==(const MegaNatural &ob1, const MegaNatural &ob2);
	friend bool operator <=(const MegaNatural &ob1, const MegaNatural &ob2);
	friend bool operator >=(const MegaNatural &ob1, const MegaNatural &ob2);
	friend bool operator <(const MegaNatural &ob1, const MegaNatural &ob2);
	friend bool operator >(const MegaNatural &ob1, const MegaNatural &ob2);
	MegaNatural& operator =(const MegaNatural &ob);
	MegaNatural& operator =(const long long a);
	friend MegaNatural operator +(const MegaNatural &ob1, const MegaNatural ob2);
	friend MegaNatural operator -(const MegaNatural &ob1, const MegaNatural ob2);
	friend MegaNatural operator /(const MegaNatural &ob1, const MegaNatural ob2);
	friend MegaNatural operator %(const MegaNatural &ob1, const MegaNatural ob2);
	friend MegaNatural operator *(const MegaNatural &ob1, const MegaNatural ob2);

	string toString();
	
	
private:
	deque<uchar> nums;

	//Описание: умножение на цифру
	void mulByK(uchar k);
	
	//Описание: вычитание натурального, умноженного на цифру
	void subNatMulK(const MegaNatural &ob, long long k);
};

#include "MegaNatural.cpp"
#endif


