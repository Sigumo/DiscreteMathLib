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
	MegaNatural res, tmp;
	unsigned int i = 0, j = 0;
	res = ob1;
	tmp = ob2;
	deque<uchar>::iterator iter1 = res.nums.end();
	deque<uchar>::iterator iter;
	deque<uchar>::iterator iter2 = tmp.nums.end();
	if(res < ob2)
	{
		cout << "Resulting value isn't natural" << endl;
		return res;
	}
	if(res == ob2)
	{
		for(i = 1; i < res.nums.size(); i++)
		{
			res.nums.pop_back();
		}
		res.nums[0] = 0;
		return res;
	}
	if(ob1 > ob2)
	{
		for(i = 0; i < ob1.nums.size(); i++)
		{
			if(j > ob2.nums.size())
			{
				break;
			}
			if(*iter1 >= *iter2)
			{
				*iter1 = *iter1 - *iter2;
				iter1--;
				iter2--;
			}
			else if(*iter1 < *iter2)
			{
				*iter1 = (*iter1 + 10) - *iter2;
				*(iter1 - 1) = *(iter1 - 1) - 1;
				iter1--;
				iter2--;
			}
			j++;
		}
		iter = res.nums.begin();
		while(*iter == 0)
			{
				iter++;
				res.nums.pop_front();
			}
		return res;
	}
}

MegaNatural operator /(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural res, ob;
	ob = ob1;
	if(ob1 < ob2)
	{
		return res;
	}
	deque<uchar>::iterator iter;
	res.nums.push_front(0);
	while(ob1 >= ob2)
	{
		ob = ob1 - ob2;
		for (iter = res.nums.end(); iter != res.nums.begin(); iter--)
		{
			if(*iter >= 0 && *iter < 9)
			{
				*iter = *iter + 1;
				break;
			}
			if(*iter == 9)
			{
				*iter = 0;
				if(*(iter - 1) == 9)
					{
						continue;
					}
				*(iter - 1) = *(iter - 1) + 1;
				if((iter - 1) == res.nums.begin())
				{
					res.nums.push_front(0);
				}

			}
		}
	}
	iter = res.nums.begin();
		while(*iter == 0)
			{
				iter++;
				res.nums.pop_front();
			}
	return res;
}

MegaNatural operator %(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	ob = ob1;
	while(ob > ob2)
	{
		ob = ob - ob2;
	}
	return ob;
}

MegaNatural operator *(const MegaNatural &ob1, const MegaNatural ob2)
{
	MegaNatural ob;
	return ob;
}