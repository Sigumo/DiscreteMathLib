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
	return false;
}

bool operator !=(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return false;
}

bool operator >(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return false;
}

bool operator <(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return false;
}

bool operator >=(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return false;
}

bool operator <=(const MegaInteger &ob1, const MegaInteger &ob2)
{
	return false;
}

MegaInteger operator %(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1.toMegaNatural() % _ob2.toMegaNatural();
	if (ob1.isNegative)
		ob = ob2.abs - ob;
	return ob;
}

MegaInteger operator *(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1.toMegaNatural() * _ob2.toMegaNatural();
	ob.isNegative = ob1.isNegative == ob2.isNegative;
	return ob;
}

MegaInteger operator /(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1.toMegaNatural() / _ob2.toMegaNatural();
	ob.isNegative = ob1.isNegative == ob2.isNegative;
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
	else if (_ob1.abs() > _ob2.abs)
	{
		ob.num = _ob1.toMegaNatural() - _ob2.toMegaNatural();
		ob.isNegative = _ob1.isNegative;
	}
	else
	{
		ob.num = _ob2.toMegaNatural() - _ob1.toMegaNatural();
		ob.isNegative = _ob2.isNegative;
	}
	return ob;
}

MegaInteger operator -(const MegaInteger &ob1, const MegaInteger &ob2)
{
	MegaInteger ob, _ob1 = ob1, _ob2 = ob2;
	ob = _ob1 + (-_ob2);
	return ob;
}