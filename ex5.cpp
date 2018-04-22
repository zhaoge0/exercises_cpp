//05. 求出[900, 1000]间有偶数个因子（这里因子不含1和自身）的数有多少个，其中最小的一个？

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int min = 0, count = 0, total = 0;
	for (int i = 1000; i >= 900; --i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (i%j == 0) ++count; 
		}
		if (count%2 == 0)
		{
			min = i;
			++total;
		}
	}
	cout << "there are " << total << "numbers with even number of factors." << endl
		 << "the smallest one is " << min << ".\n";
	return 0;
}