#include "MegaNaturalBase.h"

class MegaNatural : MegaNaturalBase
{
public:
	MegaNatural();
	MegaNatural(MegaNaturalBase &ob);
	~MegaNatural();

	//Описание: проверка, является ли число 0
	//Возврат: (1/0)
	bool isZero() override;
	//Описание: умножение числа на цифру
	void multByK(int k) override;
	//Описание: умножение числа на 10^k
	void multByTenPowK(int k) override;
	//Описание: вычитание натурального, умноженного на цифру
	void subNatMulK(MegaNaturalBase &ob, int k) override;
	//Описание: первая цифра делителя при делении на натуральное
	int firstDigOfDivByNat(MegaNaturalBase &ob) override;
	//Описание: НОД натуральных
	MegaNaturalBase &gcd(MegaNaturalBase &ob) override;
	//Описание: НОК натуральных
	MegaNaturalBase &lcm(MegaNaturalBase &ob) override;
};

#ifndef MEGA_NATURAL
#define MEGA_NATURAL
#include "MegaNatural.cpp"
#endif