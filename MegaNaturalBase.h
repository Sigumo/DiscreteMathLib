#ifndef MEGA_NATURAL_BASE
#define MEGA_NATURAL_BASE
#include <deque>

typedef unsigned char uchar;

class MegaNaturalBase
{
public:
	MegaNaturalBase();
	MegaNaturalBase(MegaNaturalBase &ob);
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


