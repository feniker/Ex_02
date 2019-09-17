#include "Header.h"
#include <vector>

VecArrayStat::VecArrayStat(vector <triplet> newList)
{
	list = newList;
	for (int i = 0; i < list.size(); i++)
	{
		valList.pushArray(list[i].val());
	}
}
VecArrayStat::VecArrayStat()
{

}
void VecArrayStat::pushArray(triplet buf)
{
	list.push_back(buf);
	valList.pushArray(list.back().val());
}
void VecArrayStat::pushArray(int x, int y, int z)
{
	triplet buf;
	buf.setFirst(x);
	buf.setSecond(y);
	buf.setThird(z);
	list.push_back(buf);
	valList.pushArray(list.back().val());
}
int VecArrayStat::maxValue() const
{
	return valList.maxValue();
}
int VecArrayStat::minValue() const
{
	return valList.minValue();
}
double VecArrayStat::meanAr()
{
	return valList.meanAr();
}
double VecArrayStat::rms()
{
	return valList.rms();
}
size_t VecArrayStat::countLarger(int a)
{
	return valList.countLarger(a);
}
void VecArrayStat::print()
{
	valList.print();
}