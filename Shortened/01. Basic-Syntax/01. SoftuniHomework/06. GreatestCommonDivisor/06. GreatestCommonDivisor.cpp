#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int cnt;
	int gcd = 0;
	int a, b;
	cin >> a >> b;

	if (a < b)
	{
		cnt = a;
	}
	else { cnt = b; }

	
	for (int i = 1; i <= cnt; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			gcd = i;
		}
	}

	cout << gcd << endl;
    return 0;
}

