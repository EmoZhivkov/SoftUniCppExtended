#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number larger than or equal to 1: ";
	cin >> num;

	if (num < 1)
	{
		cout << "You've entered an incorrect number!" << endl;
	}

	for (int i = 1; i <= num; i++)
		cout << i << " ";

	cout << endl;
    return 0;
}

