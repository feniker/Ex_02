#include "Header.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>

ArrayStat::ArrayStat(vector <int> newList)
{
	list = newList;
	sortlist = list;
	sort(sortlist.begin(), sortlist.end());
	maxArray = *std::max_element(newList.begin(), newList.end());
	minArray = *std::min_element(newList.begin(), newList.end());
}
ArrayStat::ArrayStat()
{
}
void ArrayStat::pushArray(int a)
{
	if (list.size() != 0)
	{
		maxArray = max(maxArray, a);
		minArray = min(minArray, a);
	}
	else
	{
		maxArray = a;
		minArray = a;
	}
	list.push_back(a);
	this->pushSort(a);

}
int ArrayStat::maxValue() const
{
	return maxArray;
}
int ArrayStat::minValue() const
{
	return minArray;
}
double ArrayStat::meanAr() const
{
	double ans = 0;
	ans = (double)accumulate(list.begin(), list.end(), 0) / list.size();
	return ans;
}
double ArrayStat::rms() const
{
	double ans = 0;
	double mean;
	mean = this->meanAr();
	for (int i = 0; i < list.size(); i++)
	{
		ans += (mean - list[i]) * (mean - list[i]) / list.size();
	}
	return sqrt((double)ans);
}
size_t ArrayStat::countLarger(int a)
{
	size_t count = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] >= a) count++;
	}
	return count;
}
void ArrayStat::print()
{
	cout << "Unsorted";
	cout << endl;
	for (int i = 0; i < sortlist.size(); i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
	cout << "Sorted";
	cout << endl;
	for (int i = 0; i < sortlist.size(); i++)
	{
		cout << sortlist[i] << " ";
	}
}