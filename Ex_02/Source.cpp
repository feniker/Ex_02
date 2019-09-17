#include "Header.h"
#include <iostream>

using namespace std;
int main()
{
	ArrayStat ar;
	int n;
	cout << "Number of values: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int buf;
		cin >> buf;
		ar.pushArray(buf);
	}

}