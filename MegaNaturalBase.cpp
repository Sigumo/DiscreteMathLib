#include <iostream>
#include <malloc.h>
#include <deque>
#include <string>

using std::deque;
using std::string;

MegaNaturalBase::MegaNaturalBase()
{
	nums.push_back((uchar)0);
}
MegaNaturalBase::MegaNaturalBase(MegaNaturalBase &ob)
{	
	nums = deque<uchar>(ob.nums);
}

MegaNaturalBase::~MegaNaturalBase()
{
}

std::ostream& operator<<(std::ostream &os,MegaNaturalBase &ob)
{
	os << ob.toString();
	return os;
}

int MegaNaturalBase::getN()
{
	return nums.size()-1;
}

int MegaNaturalBase::getNumAt(int pos)
{
	if (pos < 0 || pos > nums.size()-1)
	{
		std::cout << "Error! Incorrect position in getNumAt.";
		return -1;
	}
	return (int)nums[pos];
}
void MegaNaturalBase::setNumAt(int pos, int val)
{
	if (pos < 0 || pos > nums.size()-1)
		std::cout << "Error! Incorrect position in setNumAt.";
	else if (val < 0 || val > 9)
		std::cout << "Error! Incorrect value in setNumAt.";
	else
		nums[pos] = (uchar)val;
}

void MegaNaturalBase::addRank(int val)
{
	if (val < 0 || val > 9)
		std::cout << "Error! Incorrect value in addRank.";
	else
	{
		nums.push_back((uchar)val);
	}
}

void MegaNaturalBase::deleteRank()
{
	if (nums.size() == 1)
		std::cout << "Error. n = 0 in deleteRank.";
	else
	{
		nums.pop_back();
	}
}

string MegaNaturalBase::toString()
{
	string temp;
	for (int i = 0; i < nums.size(); i++)
		temp+=(char)(nums[nums.size()-1 - i] + '0');
	return temp;
}