// 02. ProductSign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	double x = a * b * c;

	if(x >= 0)
	{
		cout << "+" << endl;
	}
	else {
		cout << "-" << endl;
	}
    return 0;
}

