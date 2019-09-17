#include "Header.h"

triplet::triplet()
{
	x = y = z = 0;
}
triplet::triplet(int x_, int y_, int z_)
{
	x = x_;
	y = y_;
	z = z_;
}
int triplet::first()
{
	return x;
}
int triplet::second()
{
	return y;
}
int triplet::third()
{
	return z;
}
void triplet::setFirst(int a)
{
	x = a;
}
void triplet::setSecond(int a)
{
	y = a;
}
void triplet::setThird(int a)
{
	z = a;
}
double triplet::val() const
{
	return sqrt(x * x + y * y + z * z);
}