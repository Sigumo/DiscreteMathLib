#ifndef MEGA_NATURAL_BASE
#define MEGA_NATURAL_BASE

#include <iostream>
#include <malloc.h>
#include <deque>
#include <string>

typedef unsigned char uchar;

class MegaNaturalBase
{
public:
	MegaNaturalBase();
	MegaNaturalBase(MegaNaturalBase &ob);
	MegaNaturalBase(std::string str);
	~MegaNaturalBase();
	
	int getN();
	int getNumAt(int pos);
	void setNumAt(int pos, int val);

	void addRank(int val);
	void MegaNaturalBase::addRankFront(int val);
	void deleteRank();
	std::string toString();
	void clearFromZero();

private:
	std::deque<uchar> nums;
};

#include "MegaNaturalBase.cpp"
#endif


