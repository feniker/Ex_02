#pragma once
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class triplet
{
public:
	triplet();
	triplet(int x_, int y_, int z_);
	int first();
	int second();
	int third();
	void setFirst(int a);
	void setSecond(int a);
	void setThird(int a);
	double val() const;
private:
	int x, y, z;
};

class ArrayStat
{
public:
	ArrayStat(vector <int> newList);
	ArrayStat();
	void pushArray(int a);
	int maxValue() const;
	int minValue() const;
	double meanAr() const;
	double rms() const;
	size_t countLarger(int a);
	void print();
private:
	vector <int> list, sortlist;
	void pushSort(int x)
	{
		if (!sortlist.empty())
		{
			vector <int>::iterator it;
			it = sortlist.begin();
			int pos = 0;
			while (pos < sortlist.size() && x > sortlist[pos])
			{
				pos++;
			}
			it = it + pos;
			if (pos != sortlist.size()) sortlist.insert(it, x);
			else sortlist.push_back(x);
		}
		else sortlist.push_back(x);
	}
	int maxArray;
	int minArray;
};

class VecArrayStat
{
public:
	VecArrayStat(vector <triplet> newList);
	VecArrayStat();
	void pushArray(triplet buf);
	void pushArray(int x, int y, int z);
	int maxValue() const;
	int minValue() const;
	double meanAr();
	double rms();
	size_t countLarger(int a);
	void print();
private:
	vector <triplet> list;
	ArrayStat valList;
	int maxArray;
	int minArray;
};
