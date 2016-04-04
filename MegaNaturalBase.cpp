#include <iostream>
#include <malloc.h>

MegaNaturalBase::MegaNaturalBase()
{
	n = 0;
	num = (unsigned char*)malloc(sizeof(unsigned char));
	num[0] = 0;
}
MegaNaturalBase::MegaNaturalBase(MegaNaturalBase &ob)
{	
	n = ob.n;
	num = (unsigned char*)malloc(sizeof(unsigned char)*(ob.n+1));
	for (int i = 0; i <= ob.n; i++)
		num[i] = ob.num[i];
}

MegaNaturalBase::~MegaNaturalBase()
{
	free(num);
}

std::ostream& operator<<(std::ostream &os,MegaNaturalBase &ob)
{
	int n = ob.getN();
	char *str = (char*)malloc(sizeof(char)*(n + 2));
	for (int i = 0; i <= n; i++)
		str[i] = '0' + ob.getNumAt(n - i);
	str[n + 1] = '\0';
	os << str;
	return os;
}

int MegaNaturalBase::getN()
{
	return n;
}

int MegaNaturalBase::getNumAt(int pos)
{
	if (pos < 0 || pos > n)
	{
		std::cout << "Error! Incorrect position.";
		return -1;
	}
	return (int)num[pos];
}
void MegaNaturalBase::setNumAt(int pos, int val)
{
	if (pos < 0 || pos > n)
		std::cout << "Error! Incorrect position.";
	else if (val < 0 || val > 9)
		std::cout << "Error! Incorrect value.";
	else
		num[pos] = (unsigned char)val;
}

void MegaNaturalBase::addRank(int val)
{
	if (val < 0 || val > 9)
		std::cout << "Error! Incorrect value.";
	else
	{
		++n;
		num = (unsigned char*)realloc(num, sizeof(unsigned char)*(n + 1));
		num[n] = (unsigned char)val;
	}
}

void MegaNaturalBase::deleteRank()
{
	if (n == 0)
		std::cout << "Error. n = 0.";
	else
	{
		--n;
		num = (unsigned char*)realloc(num, sizeof(unsigned char)*(n + 1));
	}
}

void MegaNaturalBase::reverse()
{
	for (int i = 0; i <= n / 2; i++)
	{
		unsigned char t = num[i];
		num[i] = num[n - i];
		num[n - i] = t;
	}
}

char *MegaNaturalBase::toString()
{
	char *str = (char*)malloc(sizeof(char)*(n+2));
	for (int i = 0; i <= n; i++)
		str[i] = '0' + num[n - i];
	str[n + 1] = '\0';
	return str;
}

void MegaNaturalBase::clearFromZero()
{
	while (num[n] == 0 && n > 0)
		num = (unsigned char*)realloc(num, sizeof(unsigned char*)*(--n + 1));
}