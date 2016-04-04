#include <iostream>

MegaNatural::MegaNatural() : MegaNaturalBase::MegaNaturalBase() {}
MegaNatural::MegaNatural(MegaNaturalBase &ob) : MegaNaturalBase::MegaNaturalBase(ob) {}
MegaNatural::~MegaNatural() {}

//Описание: проверка, является ли число 0
//Возврат: (1/0)
bool MegaNatural::isZero() 
{
	return true;
}

//Описание: умножение числа на цифру
void MegaNatural::multByK(int k)
{

}

//Описание: умножение числа на 10^k
void MegaNatural::multByTenPowK(int k)
{

}

//Описание: вычитание натурального, умноженного на цифру
void MegaNatural::subNatMulK(MegaNaturalBase &ob, int k)
{

}

//Описание: первая цифра делителя при делении на натуральное
int MegaNatural::firstDigOfDivByNat(MegaNaturalBase &ob)
{
	return 0;
}

//Описание: НОД натуральных
MegaNaturalBase &MegaNatural::gcd(MegaNaturalBase &ob)
{
	return ob;
}

//Описание: НОК натуральных
MegaNaturalBase &MegaNatural::lcm(MegaNaturalBase &ob)
{
	return ob;
}