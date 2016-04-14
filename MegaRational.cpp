MegaRational::MegaRational()
{
	numerator = MegaInteger();
	denominator = MegaNatural(1);
}

MegaRational::MegaRational(const MegaInteger &a)
{
	numerator = a;
	denominator = MegaNatural(1);
}

MegaRational::MegaRational(const MegaInteger &a, const  MegaNatural &b)
{
	numerator = a;
	denominator = b;
}

MegaRational::MegaRational(const MegaRational &a)
{
	numerator = a.numerator;
	denominator = a.denominator;
}

MegaRational::~MegaRational() {}

void MegaRational::reduction() {}
bool MegaRational::isInteger()
{
	return false;
}
MegaInteger MegaRational::toMegaInteger()
{
	MegaInteger ob;
	return ob;
}

bool operator ==(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator !=(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator <(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator >(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator <=(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator >=(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}

MegaRational operator +(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;

	res.denominator = lcm(ob1.denominator, ob2.denominator);
	res.numerator = ob1.numerator * res.denominator / ob1.denominator + 
		ob2.numerator * res.denominator / ob2.denominator;
	res.reduction();
	return res;
}

MegaRational operator -(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res = ob1 + (-ob2);
	return res;
}

MegaRational operator *(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator /(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator %(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator -(const MegaRational &ob)
{
	MegaRational ob1;
	ob1.numerator = -ob.numerator;
	ob1.denominator = ob.denominator;
	return ob1;
}

MegaRational& operator =(MegaRational &ob)
{
	MegaRational ob1;
	if(this != &ob)
	{
	ob1.numerator = ob.numerator;
	ob1.denominator = ob.denominator;
	return ob1;
	}
	else return ob;
	
}