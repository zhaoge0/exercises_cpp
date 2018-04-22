// 18. 计算pai的近似值，直到最后一项的绝对值小于e为止

#include <iostream>
#include <cmath>
#include <iomanip>
#define E 1e-8
using namespace std;

int main(int argc, char const *argv[])
{
	double pi = 1,an = 1;
	int sign = -1;
	for (int i = 3; fabs(an) > E; i += 2)
	{
		an = sign/double(i);
		pi += an;
		sign *= -1;
	}

	cout << pi*4;
	return 0;
}


 
