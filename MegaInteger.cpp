MegaInteger::MegaInteger()
{
	isNegative = false;
	num = MegaNatural();
}
MegaInteger::MegaInteger(MegaNatural &ob)
{
	isNegative = false;
	num = MegaNatural(ob);
}
MegaInteger::MegaInteger(MegaInteger &ob)
{
	isNegative = ob.isNegative;
	num = MegaNatural(ob.num);
}
MegaInteger::MegaInteger(long long a)
{

}
MegaInteger::MegaInteger(string str)
{
	if (str[0] == '-')
	{
		isNegative = true;
		str.erase(0, 1);
	}
	else
		isNegative = false;
	num = MegaNatural(str);
}

MegaInteger::~MegaInteger() {}

ostream& operator<<(ostream &os, MegaInteger &ob)
{
	os << ob.toString();
	return os;
}

string MegaInteger::toString()
{
	string str = (isNegative ? "-" : "") + num.toString();
	return str;
}

MegaInteger abs()
{
	MegaInteger ob;
	return ob;
}

MegaNatural toMegaNatural()
{
	MegaNatural ob;
	return ob;
}

bool operator ==(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return (ob1.num == ob2.num && (ob1.isNegative == ob2.isNegative));
}

bool operator !=(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return !(ob1 == ob2);
}

bool operator >(const MegaInteger &ob1, const MegaInteger &ob2)
{
	if (ob1.isNegative)
		if (ob2.isNegative)
			return ob1.num < ob2.num;
		else
			return false;
	else
		if (ob2.isNegative)
			return true;
		else
			return ob1.num > ob2.num;
}

bool operator <(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return ob2 > ob1;
}

bool operator >=(const MegaInteger &ob1, const MegaInteger &ob2)
{
	if (ob1.isNegative)
		if (ob2.isNegative)
			return ob1.num <= ob2.num;
		else
			return false;
	else
		if (ob2.isNegative)
			return true;
		else
			return ob1.num >= ob2.num;
}

bool operator <=(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return ob2 >= ob1;
}

MegaInteger operator %(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1.toMegaNatural() % _ob2.toMegaNatural();
	if (_ob1.isNegative)
		ob = _ob2.abs - ob;
	return ob;
}

MegaInteger operator *(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1.toMegaNatural() * _ob2.toMegaNatural();
	ob.isNegative = _ob1.isNegative == _ob2.isNegative;
	return ob;
}

MegaInteger operator /(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1.toMegaNatural() / _ob2.toMegaNatural();
	ob.isNegative = _ob1.isNegative == _ob2.isNegative;
	return ob;
}

MegaInteger operator +(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	if (ob1.isNegative == ob2.isNegative)
	{
		ob.num = _ob1.toMegaNatural() + _ob2.toMegaNatural();
		ob.isNegative = _ob1.isNegative;
	}
	else if (_ob1.abs() > _ob2.abs())
	{
		ob.num = _ob1.toMegaNatural() - _ob2.toMegaNatural();
		ob.isNegative = _ob1.isNegative;
	} 
	else if (_ob1.abs() < _ob2.abs());
	{
		ob.num = _ob2.toMegaNatural() - _ob1.toMegaNatural();
		ob.isNegative = _ob2.isNegative;
	}
	else 
		ob = 0;
	return ob;
}

MegaInteger operator -(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1 + (-_ob2);
	return ob;
}