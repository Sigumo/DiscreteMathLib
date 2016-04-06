MegaNatural::MegaNatural() : MegaNaturalBase() {}
MegaNatural::MegaNatural(MegaNaturalBase &ob) : MegaNaturalBase(ob) {}
MegaNatural::MegaNatural(std::string str) : MegaNaturalBase(str) {}
MegaNatural::~MegaNatural() {}


//Описание: умножение числа на цифру
void MegaNatural::multByK(int k)
{

}

//Описание: умножение числа на 10^k
void MegaNatural::multByTenPowK(int k)
{
	if (k < 0)
		cout << "Incorrect k in multByTenPowK" << endl;
	else if (*this != 0)	
		while (k--) 
			addRankFront(0);
}

//Описание: вычитание натурального, умноженного на цифру
void MegaNatural::subNatMulK(MegaNatural &ob, int k)
{

}

//Описание: первая цифра делителя при делении на натуральное
int MegaNatural::firstDigOfDivByNat(MegaNatural &ob)
{
	return 0;
}

//Описание: НОД натуральных
MegaNatural MegaNatural::gcd(MegaNatural &ob1, MegaNatural &ob2)
{
	return ob1;
}

//Описание: НОК натуральных
MegaNatural MegaNatural::lcm(MegaNatural &ob1, MegaNatural &ob2)
{
	return ob1;
}