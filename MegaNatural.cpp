#include <iostream>

MegaNatural::MegaNatural() : MegaNaturalBase() {}
MegaNatural::MegaNatural(MegaNaturalBase &ob) : MegaNaturalBase(ob) {}
MegaNatural::~MegaNatural() {}

//Описание: проверка, является ли число 0
//Возврат: (1/0)
bool isZero()
{
	return true;
}

//Описание: умножение числа на цифру
void multByK(int k)
{

}

//Описание: умножение числа на 10^k
void multByTenPowK(int k)
{

}

//Описание: вычитание натурального, умноженного на цифру
void subNatMulK(MegaNaturalBase &ob, int k)
{

}

//Описание: первая цифра делителя при делении на натуральное
int firstDigOfDivByNat(MegaNaturalBase &ob)
{
	return 0;
}

//Описание: НОД натуральных
MegaNatural gcd(MegaNatural &ob1, MegaNatural &ob2)
{
	return ob1;
}

//Описание: НОК натуральных
MegaNatural lcm(MegaNatural &ob1, MegaNatural &ob2)
{
	return ob1;
}