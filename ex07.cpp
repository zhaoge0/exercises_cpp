// 07. 写一个函数找出一个整数数组中，第二大的数。

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	const int n = 3;
	int a[n], max = 0, max2 = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int j = 0; j < n; ++j)
	{
		if (a[j] > max)
		{
			max2 = max;
			max = a[j];
		}
	}
	cout << "the second largest number is " << max2 << endl;
	
	return 0;
}
