#include "MegaNaturalBase.h"

class MegaNatural : MegaNaturalBase
{
public:
	MegaNatural() : MegaNaturalBase();
	MegaNatural(MegaNaturalBase &ob) : MegaNaturalBase(ob);
	~MegaNatural() : ~MegaNaturalBase();

	//Описание: сравнение натуральных чисел
	//Возврат(1,0,-1)
	virtual int compare(MegaNaturalBase &ob) override;
	//Описание: проверка, является ли число 0
	//Возврат: (1/0)
	virtual bool isZero() override;
	//Описание: прибавить к числу 1
	virtual void plusOne() override;
	//Описание: вычитание натурального числа
	virtual void subNat(MegaNaturalBase &ob) override;
	//Описание: умножение числа на цифру
	virtual void multByK(int k) override;
	//Описание: умножение числа на 10^k
	virtual void multByTenPowK(int k) override;
	//Описание: прибавление натурального
	virtual void addNat(MegaNaturalBase &ob) override;
	//Описание: вычитание натурального, умноженного на цифру
	virtual void subNatMulK(MegaNaturalBase &ob, int k) override;
	//Описание: умножение на натуральное
	virtual void multByNat(MegaNaturalBase &ob) override;
	//Описание: первая цифра делителя при делении на натуральное
	virtual int firstDigOfDivByNat(MegaNaturalBase &ob) override;
	//Описание: деление на натуральное
	virtual void divByNat(MegaNaturalBase &ob) override;
	//Описание: остаток от деления на натуральное
	//Возврат: остаток от деления
	virtual MegaNaturalBase &modByNat(MegaNaturalBase &ob) override;
	//Описание: НОД натуральных
	virtual MegaNaturalBase &gcd(MegaNaturalBase &ob) override;
	//Описание: НОК натуральных
	virtual MegaNaturalBase &lcm(MegaNaturalBase &ob) override;
};

#ifndef MEGA_NATURAL
#define MEGA_NATURAL
#include "MegaNatural.cpp"
#endif