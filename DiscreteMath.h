#ifndef DISCRETE_MATH
#define DISCRETE_MATH

#include "MegaNatural.h"
#include "MegaInteger.h"

static class DiscreteMath 
{
public:
	static MegaNatural gcd(const MegaNatural &a, const MegaNatural &b);
	static MegaNatural lcm(const MegaNatural &a, const MegaNatural &b);
};

#include "DiscreteMath.cpp"

#endif
