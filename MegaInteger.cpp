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
MegaInteger::MegaInteger(std::string str)
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

std::ostream& operator<<(std::ostream &os, MegaInteger &ob)
{
	os << ob.toString();
	return os;
}

std::string MegaInteger::toString()
{
	std::string str = (isNegative ? "-" : "") + num.toString();
	return str;
}