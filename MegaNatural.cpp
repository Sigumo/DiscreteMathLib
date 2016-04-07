#include "MegaNatural.h"
MegaNatural::MegaNatural()
{
	nums.push_back((uchar)0);
}
MegaNatural::MegaNatural(MegaNatural &ob)
{	
	nums = deque<uchar>(ob.nums);
}
MegaNatural::MegaNatural(string str)
{
	bool isInputCorrect = true;
	for (int i = 0; i < str.length() && isInputCorrect; i++)
	{
		uchar c = (uchar)(str[i] - '0');
		if (c > 9)
		{
			std::cout << "Error! Incorrect string in MegaNatural constructor.";
			isInputCorrect = false;
		}
		else
			nums.push_front(c);
	}
}

MegaNatural::~MegaNatural()
{
}

ostream& operator<<(std::ostream &os,MegaNatural &ob)
{
	os << ob.toString();
	return os;
}

string MegaNatural::toString()
{
	string temp;
	for (int i = 0; i < nums.size(); i++)
		temp+=(char)(nums[nums.size()-1 - i] + '0');
	return temp;
}

//Описание: умножение на цифру
void MegaNatural::mulByK(long long k) {}

//Описание: умножение на 10^k
void MegaNatural::mulByTenPowK(long long k) 
{
	if (k < 0)
		cout << "Error! Incorrect pow in multByTenPowK.";
	else if (*this != 0) //!= (MegaNatural)0?
		while (k--)
			nums.push_front(0);
}

//Описание: вычитание натурального, умноженного на цифру
void MegaNatural::subNatMulK(const MegaNatural &ob, long long k) {}

bool operator ==(const MegaNatural &ob1, const MegaNatural &ob2)
{
	return false;
}

bool operator !=(const MegaNatural &ob1, const MegaNatural &ob2)
{
	return false;
}

bool operator <=(const MegaNatural &ob1, const MegaNatural &ob2)
{
	return false;
}

bool operator >=(const MegaNatural &ob1, const MegaNatural &ob2)
{
	return false;
}

bool operator <(const MegaNatural &ob1, const MegaNatural &ob2)
{
	return false;
}

bool operator >(const MegaNatural &ob1, const MegaNatural &ob2)
{
	return false;
}

MegaNatural& MegaNatural::operator =(const MegaNatural &ob)
{
	MegaNatural ob1;
	return ob1;
}

MegaNatural& MegaNatural::operator =(const long long a)
{
	MegaNatural ob;
	return ob;
}

MegaNatural operator +(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	return ob;
}

MegaNatural operator -(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	return ob;
}

MegaNatural operator /(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	return ob;
}

MegaNatural operator %(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	return ob;
}

MegaNatural operator *(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	return ob;
}