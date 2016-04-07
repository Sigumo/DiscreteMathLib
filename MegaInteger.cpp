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

MegaNatural operator %(const MegaInteger &ob1, const MegaInteger ob2)
{	
	if (ob2 == 0)
	{
		cout << "Error! Incorrect divisor in operation %.";
		return 0;
	}

	MegaNatural ob( ob1.abs.toMegaNatural() % ob2.abs.toMegaNatural() );
	if (ob1.isNegative)
		ob = ob2.abs - ob;
	return ob;
}