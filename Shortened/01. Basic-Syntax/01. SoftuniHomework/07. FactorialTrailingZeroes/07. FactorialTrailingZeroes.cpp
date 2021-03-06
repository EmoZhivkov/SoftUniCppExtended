#include "stdafx.h"
#include <iostream>
using namespace std;

/*   You do not have to read this. I am writing this for myself
     so in the future when I look back
     to check my projects I will able to see the logic behind the
	 problem far more easier.


We don't have to calculate the factoriel because we only need to 
find the number of trailing zeros.
And we cannot calculate it because our program has to able to
handle up to 50000!. That means that we have to figure out a way 
to calculate when do we have trailing zeros.
   We have trailing zeros when we have a pair of 2 and 5.
   But we do not have to calculate both the paires of 2 and 5,
   but only for the 5, because the number of the 2-s is always bigger
   than the number of the 5-s.
Next problem: in the number 25 or 50, the number 5 occurs 2 times.
   That means that the larger the number 5 occurs 
   much more times. So we have to make another loop and another counter
   for the bigger numbers that are dividable by 5 in order to count
   the number of times 5 occurs.
*/


int main()
{
	int cnt5 = 0;//the counter for 5s, that occur in the factoriel
	int br = 0;//it swaps i from the loop in order not to mess up the loop
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i % 5 == 0)
		{
			br = i;
			while (br % 5 == 0)
			{
				cnt5 = cnt5 + 1;
				br = br / 5;
			}
		}
	}
	cout << cnt5 << endl;
    return 0;
}

