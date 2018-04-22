// 15. 有一个7层灯塔，每层所点灯数都等于该层上一层的两倍，灯的总数是381盏，求：塔底灯数？第几层的灯数为48？
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,sum = 0,an = 1, n = 0;
	for (int i = 0; i < 7; ++i)
	{
		sum += an;
		an *= 2;
	}
	x = 381 / sum;
	an = x;
	for (n = 1; n <= 7 && an != 48; ++n) an *= 2;
	cout << "each floor has " << x  << " limps." << endl << "the " << n << "th floor has 48 limps";
	return 0;
}