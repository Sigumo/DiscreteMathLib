class MegaNaturalBase
{
public:
	MegaNaturalBase();
	MegaNaturalBase(MegaNaturalBase &ob);
	~MegaNaturalBase();
	
	int getN();
	int getNumAt(int pos);
	void setNumAt(int pos, int val);

	void addRank(int val);
	void deleteRank();
	void reverse();
	char *toString();
	void clearFromZero();

	//Описание: проверка, является ли число 0
	//Возврат: (1/0)
	virtual bool isZero() = 0;
	//Описание: умножение числа на цифру
	virtual void multByK(int k) = 0;
	//Описание: умножение числа на 10^k
	virtual void multByTenPowK(int k) = 0;
	//Описание: вычитание натурального, умноженного на цифру
	virtual void subNatMulK(MegaNaturalBase &ob, int k) = 0;
	//Описание: первая цифра елителя при делении на натуральное
	virtual int firstDigOfDivByNat(MegaNaturalBase &ob) = 0;
	//Описание: НОД натуральных
	virtual MegaNaturalBase &gcd(MegaNaturalBase &ob) = 0;
	//Описание: НОК натуральных
	virtual MegaNaturalBase &lcm(MegaNaturalBase &ob) = 0;

private:
	int n;
	unsigned char *num;
};

#ifndef MEGA_NATURAL_BASE
#define MEGA_NATURAL_BASE
#include "MegaNaturalBase.cpp"
#endif


