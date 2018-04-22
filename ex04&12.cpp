#include <iostream>
#include <iomanip>
using namespace std;
//04. 求1000之内的完全数。说明：完全数就是:除了它本身以外所有因子之和等于其本身,例如:6=1+2+3。
int main(int argc, char const *argv[])
{
	int sum;
	for (int i = 6; i <= 1000; ++i)
	{
		sum = 0;
		for (int j = 1; j < i; ++j)
		{
			if (i%j==0)
			{
				sum += j;
			}
		}
		if (i == sum)
		{
			cout << setw(4) << i << " is a perfect number." << endl;
		}
	}
	return 0;
}
