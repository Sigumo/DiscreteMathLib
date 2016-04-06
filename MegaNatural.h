#ifndef MEGA_NATURAL
#define MEGA_NATURAL

#include "MegaNaturalBase.h"
#include <iostream>

class MegaNatural : public MegaNaturalBase
{
public:
	MegaNatural();
	MegaNatural(MegaNaturalBase &ob);
	MegaNatural(std::string str);
	~MegaNatural();

	//Описание: проверка, является ли число 0
	//Возврат: (1/0)
	bool isZero();
	//Описание: умножение числа на цифру
	void multByK(int k);
	//Описание: умножение числа на 10^k
	void multByTenPowK(int k);
	//Описание: вычитание натурального, умноженного на цифру
	void subNatMulK(MegaNatural &ob, int k);
	//Описание: первая цифра делителя при делении на натуральное
	int firstDigOfDivByNat(MegaNatural &ob);
	//Описание: НОД натуральных
	MegaNatural gcd(MegaNatural &ob1, MegaNatural &ob2);
	//Описание: НОК натуральных
	MegaNatural lcm(MegaNatural &ob1, MegaNatural &ob2);
	//std::string toString();
};

#include "MegaNatural.cpp"
#endif